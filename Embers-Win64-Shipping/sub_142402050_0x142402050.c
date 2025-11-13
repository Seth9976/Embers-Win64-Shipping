// 函数: sub_142402050
// 地址: 0x142402050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208

if ((*(arg1[0x1b] + 0x38))(&arg1[0x1b]) != 0)
    (*(arg1[0x1b] + 0x20))(&arg1[0x1b])

int64_t result = (*(arg1[0x1b] + 0x18))(&arg1[0x1b])

if (result != 0)
    int64_t* r15_1 = arg2[1]
    
    if (r15_1 == 0)
        sub_140d1e450(arg2)
        r15_1 = arg2[1]
    
    int64_t rdi_1 = r15_1[0x12]
    int64_t rsi_1 = r15_1[0xf]
    int64_t r14_1 = r15_1[0x13]
    int64_t rbp_1 = r15_1[0x14]
    r15_1[0x12] = arg1
    (*(*r15_1 + 0x78))(r15_1, 0)
    r15_1[0x13] = 0
    r15_1[0x14] = 0
    void var_1e0
    void** var_1d8
    (*(*arg1 + 0x280))(arg1, *SymBuffer::end(sub_140b4cb20(&var_1d8, r15_1), &var_1e0), result)
    sub_140b4cbb0(&var_1d8)
    r15_1[0x12] = rdi_1
    result = (*(*r15_1 + 0x78))(r15_1, rsi_1)
    r15_1[0x13] = r14_1
    r15_1[0x14] = rbp_1

j_sub_140594850()
__security_check_cookie(rax_1 ^ &var_208)
return result
