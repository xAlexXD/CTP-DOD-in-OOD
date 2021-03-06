#pragma once
#include <memory>
#include "BaseTest.h"
#include "NpcNoMem.h"
#include "JobSystem.hpp"

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

	void NpcShieldTest(int startInd, int endInd);
	void NpcHealthTest(int startInd, int endInd);
	void NpcArmourTest(int startInd, int endInd);

	void SanityCheckRunCount() override;

	JobSystem* _jobManager = nullptr;
	std::vector<std::unique_ptr<NpcNoMem>> _npcVec;
};

