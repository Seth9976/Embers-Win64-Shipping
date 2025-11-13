// 函数: sub_1427b3d20
// 地址: 0x1427b3d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x50)
int64_t* rbx = rcx
void* r10 = &rcx[sx.q(*(arg1 + 0x58))]

if (rcx != r10)
    do
        if (*rbx == arg2)
            int32_t rbx_2 = ((rbx - rcx) s>> 3).d
            
            if (rbx_2 == 0xffffffff)
                break
            
            sub_14093d4c0(arg2 + 0x28)
            void*** rax_1 = sub_140a84c80(0, 0x20, 0)
            
            if (rax_1 != 0)
                rax_1[1] = arg1
                *rax_1 = &data_1434ba080
                rax_1[3] = sub_140a387b0()
                *rax_1 = &data_1434ba0d8
            
            if (rax_1 != 0)
                sub_140599630(arg3 + 0x28, 1)
                void arg_8
                (*rax_1)[6](rax_1, &arg_8)
                int64_t r14_1 = sx.q(*(arg3 + 0x30))
                int32_t rax_4 = (r14_1 + 1).d
                *(arg3 + 0x30) = rax_4
                
                if (rax_4 s> *(arg3 + 0x34))
                    sub_1405a4f90(arg3 + 0x28)
                
                void** rax_7 = (r14_1 << 4) + *(arg3 + 0x28)
                *rax_7 = rax_1
                rax_7[1].d = 2
            
            *(*(arg1 + 0x50) + (sx.q(rbx_2) << 3)) = arg3
            
            if (arg4 != 0)
                *(arg3 + 0x48) = 1
            
            sub_140599090(arg1 + 0x30)
            int64_t rax_9
            rax_9.b = 1
            return rax_9
        
        rbx = &rbx[1]
    while (rbx != r10)

int64_t rax
rax.b = 0
return rax
