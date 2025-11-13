// 函数: sub_141b58ce0
// 地址: 0x141b58ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *(arg1 + 0x120)
int64_t* rbx = result[1]
void* r12 = *result

if (rbx != 0)
    rbx[1].d += 1

int32_t i = 0

if (*(arg2 + 0x18) s> 0)
    int64_t* r14_1 = nullptr
    int128_t zmm6 = zx.o(0)
    
    do
        result = *(arg2 + 0x10)
        int64_t* rdi_1 = *(r14_1 + result)
        
        if (*rdi_1 != 0)
            result = rdi_1[1]
            
            if (result != 0 && result[1].d s> 0)
                void* rcx = rdi_1[2]
                
                if (rcx != 0)
                    int32_t arg_8
                    result = sub_140e173b0(rcx, &arg_8)
                    
                    if (not(arg_8 f<= zmm6.d) && not(arg4 f<= zmm6.d))
                        arg3, zmm6 = sub_140de6b30(*(arg1 + 0x150), rdi_1, arg3)
                        result = sub_140dc02b0(r12)
                        sub_140e21900(*(arg1 + 0x150))
        
        i += 1
        r14_1 = &r14_1[2]
    while (i s< *(arg2 + 0x18))

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx + 8))

return result
