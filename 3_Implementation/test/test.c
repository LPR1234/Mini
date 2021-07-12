#include "unity.h"
#include "stock.h"
#define PROJECT_NAME  "Stock Inventory"
//int avlId(int cid);

int test_main(void);

void test_removeComponent(void);
void test_updateComponent(void);
void test_viewComponents(void);
bool test_addComoponentToFile(void);
void test_executeAdminChoice(void);
void test_showAdminMenu(void);
void test_showAdminLoginForm(void);
bool test_validateAdminLoginDetails(void);
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_removeComponent);
  //RUN_TEST(test_updateComponent);
  //RUN_TEST(test_viewComponents);
  RUN_TEST(test_addComoponentToFile);
  //RUN_TEST(test_executeAdminChoice);
 //RUN_TEST(test_showAdminMenu);
 // RUN_TEST(test_showAdminLoginForm);
  RUN_TEST(test_validateAdminLoginDetails);
  
  /* Close the Unity Test Framework */
  return UNITY_END(); 
}

void test_removeComponent(void)
{
  TEST_ASSERT_EQUAL(true,removeComponent);
  TEST_ASSERT_EQUAL(false,removeComponent);
}
/*void test_updateComponent(void)
{
  TEST_ASSERT_EQUAL(true, updateComponent());
  TEST_ASSERT_EQUAL(false, updateComponent());
}
void test_viewComponents(void)
{
  TEST_ASSERT_EQUAL(true, viewComponents());
  TEST_ASSERT_EQUAL(false, viewComponents());
  
}*/
bool test_addComoponentToFile(void)
{
    TEST_ASSERT_EQUAL(true,addComoponentToFile());
    TEST_ASSERT_EQUAL(false,addComoponentToFile());
}
/*void test_executeAdminChoice(void)
{
    TEST_ASSERT_EQUAL(true,executeAdminChoice());
    TEST_ASSERT_EQUAL(false,executeAdminChoice());
}
void test_showAdminMenu(void)
{
    TEST_ASSERT_EQUAL(true,showAdminMenu());
    TEST_ASSERT_EQUAL(false,showAdminMenu());
}
void test_showAdminLoginForm(void)
{
    TEST_ASSERT_EQUAL(true,showAdminLoginForm());
    TEST_ASSERT_EQUAL(false,showAdminLoginForm());
}*/
bool test_validateAdminLoginDetails(void)
{
    TEST_ASSERT_EQUAL(true,validateAdminLoginDetails());
    TEST_ASSERT_EQUAL(false,validateAdminLoginDetails());
}
