// 函数: sub_1413c7e00
// 地址: 0x1413c7e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
(*(*rcx + 0x18))(rcx, arg2, 0)
int64_t rbx = arg1[1]
int64_t r14 = 0
uint64_t rbp = *arg1
int32_t r12 = 0
int32_t r13 = 0
int64_t var_38 = 0
int32_t i = 0
int32_t var_2c = 0

for (; i s>= 0; i += 1)
    if (i s>= *(rbp + 0xdc0))
        break
    
    int64_t* rsi_1 = *((*(rbp + 0xdb8))[sx.q(i)] + 8)
    
    if (rsi_1[0x25] == rbx)
        rsi_1[7].b |= 2
        
        if ((*(rsi_1 + 0x3b) & 0x20) != 0)
            sub_1413a4610((*(rbp + 0xdb8))[sx.q(i)])
            (*(*rsi_1 + 0xc8))(rsi_1)
            int64_t* r15_2 = (sx.q(i) << 3) + *(rbp + 0xdb8)
            int64_t rsi_2 = sx.q(r12)
            r12 = (rsi_2 + 1).d
            
            if (r12 s> r13)
                sub_1405a4d70(&var_38)
                r13 = var_2c
                r14 = var_38
            
            *(r14 + (rsi_2 << 3)) = *r15_2

var_38 = r14
int32_t var_30_2 = r12
uint64_t result = sub_14138cc20(&data_143f02b98, rbp, &var_38, 1)

if (r14 == 0)
    return result

return sub_140a74f90(r14) __tailcall
