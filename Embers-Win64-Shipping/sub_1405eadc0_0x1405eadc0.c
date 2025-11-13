// 函数: sub_1405eadc0
// 地址: 0x1405eadc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
void*** result = j_sub_140a82f30(0x20)
void*** result_1 = result

if (result == 0)
    return 0

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142d62b30
result[2] = 0
result[3] = 0
CRITICAL_SECTION* lpCriticalSection = j_sub_140a82f30(0x60)
CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
int64_t* lpCriticalSection_2 = lpCriticalSection

if (lpCriticalSection == 0)
    lpCriticalSection_1 = nullptr
else
    InitializeCriticalSection(lpCriticalSection)
    SetCriticalSectionSpinCount(lpCriticalSection_1, 0xfa0)
    lpCriticalSection_1->__offset(0x28).q = 0
    lpCriticalSection_1->__offset(0x30).q = 0
    int64_t* lpCriticalSection_3 = j_sub_140a82f30(0x10)
    lpCriticalSection_2 = lpCriticalSection_3
    
    if (lpCriticalSection_3 != 0)
        *lpCriticalSection_3 = 0
    
    lpCriticalSection_1->__offset(0x48).q = lpCriticalSection_3
    lpCriticalSection_1->__offset(0x40).q = lpCriticalSection_3
    lpCriticalSection_1->__offset(0x50).q = 0

void*** result_2 = j_sub_140a82f30(0x18)
result_1 = result_2

if (result_2 != 0)
    result_2[1].d = 1
    *(result_2 + 0xc) = 1
    *result_2 = &data_142d62d50
    result_2[2] = lpCriticalSection_1

result[2] = lpCriticalSection_1
result[3] = result_2
return result
