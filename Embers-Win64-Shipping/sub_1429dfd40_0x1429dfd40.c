// 函数: sub_1429dfd40
// 地址: 0x1429dfd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
void* rbx = *(arg1 + 8)
int64_t rsi = sx.q(*arg1)

if (*(rbx + 0x3760) != 0)
    void* rdi_1 = *(arg1 + 0x10)
    
    do
        enum WAIT_EVENT rax_2 = WaitForSingleObjectEx((*(rbx + 0x3808))[rsi], 0xffffffff, 0)
        
        if (rax_2 == WAIT_OBJECT_0)
            if (*(rbx + 0x3760) == rax_2)
                break
            
            void var_28
            *(rdi_1 + 0xf58) = &var_28
            sub_1429ded40(rbx, rdi_1, (rsi + 1).d)
    while (*(rbx + 0x3760) != 0)

__security_check_cookie(rax_1 ^ &var_48)
return 0
