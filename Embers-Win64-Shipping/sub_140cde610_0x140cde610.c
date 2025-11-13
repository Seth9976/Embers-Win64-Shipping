// 函数: sub_140cde610
// 地址: 0x140cde610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = 0
int64_t* rsi

if (arg2 == 0)
    rsi = nullptr
else
    rsi = (*(*arg1 + 0x140))()

if (arg3 != 0)
    rdi = (*(*arg1 + 0x140))(arg1, arg3)

uint64_t result

if (rsi != 0)
    if (rdi != 0)
        uint64_t rbp
        
        if (((arg4 u>> 0x16).b & 1) != 0)
            rbp.b = 0
        label_140cde69c:
            
            if (rsi[2] == *(rdi + 0x10))
                uint8_t rax_6 = (arg4 u>> 9).b & 1
                
                if (not(test_bit(arg4, 0xa)))
                    goto label_140cde6d7
                
                if (rax_6 != 0)
                label_140cde6db:
                    uint64_t rdx_1 = rsi[3]
                    
                    if (rdx_1 == *(rdi + 0x18) && sub_140bdd980(rsi[2], rdx_1) != 0)
                        rbp = zx.q(sub_140cd7a00(rsi, rdi, arg4))
                else
                    char rax_7 = sub_140d23dc0(rdi, 0x30)
                    rax_6 = sub_140d23dc0(rsi, 0x30) != rax_7
                label_140cde6d7:
                    
                    if (rax_6 != 0)
                        goto label_140cde6db
        else
            rbp.b = rsi == rdi
            
            if (rsi != rdi)
                goto label_140cde69c
        
        return zx.q(rbp.b)
    
    result.b = 0
else if (rdi != 0)
    result.b = 0
else
    result.b = 1

return result
