// 函数: sub_141e426c0
// 地址: 0x141e426c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    sub_1405c5570(arg2, 0)

arg3[1].d = 0

if (*(arg3 + 0xc) != 0)
    sub_1405c5570(arg3, 0)

int32_t i = 0

if (*(arg1 + 0x18) s> 0)
    int64_t r14_1 = 0
    
    do
        int32_t* rdi_2 = *(arg1 + 0x10) + r14_1
        uint64_t rax_1 = sub_1408d4dd0(rdi_2)
        
        if (rax_1 != 0)
            void* rax_2 = sub_14258cb80()
            void* rdx = *(rax_1 + 0x10)
            int64_t rax_3 = sx.q(*(rax_2 + 0x38))
            
            if (rax_3.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
                uint64_t rax_5 = sub_140d3c6e0(rdi_2)
                uint64_t rbx_2 = rax_5
                
                if (rax_5 != 0)
                label_141e427e2:
                    void* rax_9 = sub_14258cb80()
                    void* rdx_2 = *(rbx_2 + 0x10)
                    int64_t rax_10 = sx.q(*(rax_9 + 0x38))
                    
                    if (rax_10.d s> *(rdx_2 + 0x38)
                            || *(*(rdx_2 + 0x30) + (rax_10 << 3)) != rax_9 + 0x30)
                        rbx_2 = 0
                else if (*(rdi_2 + 0x10) == 0)
                    rbx_2 = 0
                else
                    if (rax_5.d == data_1439aaa30)
                        data_1439aaa30 = 0
                    else
                        rax_5 = zx.q(data_1439aaa30)
                    
                    if (rax_5.d != rdi_2[2] || *rdi_2 != 0xffffffff)
                        void* rax_6 = sub_140d2bce0(&rdi_2[4])
                        sub_140d3a3a0(rdi_2, rax_6)
                        
                        if (rax_6 != 0 || data_143e1d7b4 == 0)
                            int32_t rax_7 = 0
                            
                            if (0 == data_1439aaa30)
                                data_1439aaa30 = 0
                            else
                                rax_7 = data_1439aaa30
                            
                            rdi_2[2] = rax_7
                        
                        uint64_t rax_8 = sub_140d3c6e0(rdi_2)
                        rbx_2 = rax_8
                        
                        if (rax_8 != 0)
                            goto label_141e427e2
                        
                        rbx_2 = 0
                    else
                        rbx_2 = 0
                
                int64_t rdi_3 = sx.q(arg2[1].d)
                int32_t rax_12 = (rdi_3 + 1).d
                arg2[1].d = rax_12
                
                if (rax_12 s> *(arg2 + 0xc))
                    sub_1405a4d70(arg2)
                
                *(*arg2 + (rdi_3 << 3)) = rbx_2
        
        i += 1
        r14_1 += 0x28
    while (i s< *(arg1 + 0x18))

int64_t rdi_4 = sx.q(arg2[1].d)
int64_t rbx_4 = sx.q(arg3[1].d)
int32_t rax_14 = (rbx_4 + rdi_4).d
arg3[1].d = rax_14

if (rax_14 s> *(arg3 + 0xc))
    sub_1405a4d70(arg3)

return memset(*arg3 + (rbx_4 << 3), 0, rdi_4 << 3) __tailcall
