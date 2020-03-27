#pragma once
#include <memory>
#include "BaseTest.h"
#include "NpcNoMem.h"
#include "JobManager.h"

class JustJobTest : public BaseTest
{

public:

	JustJobTest() = delete;
	JustJobTest(int npcMax);
	~JustJobTest() override;

	virtual void PreUpdate(float dt) override;
	virtual void Update(float dt) override;
	virtual void PostUpdate(float dt) override;

private:

	void NpcShieldTest();
	void NpcHealthTest();
	void NpcArmourTest();

	void SanityCheckRunCount() override;

	JobManager* _jobManager = nullptr;
	std::vector<std::unique_ptr<NpcNoMem>> _npcVec;
};

