// 函数: sub_1424c9120
// 地址: 0x1424c9120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r12 = arg2
int64_t* result

if (arg4 != 0)
    int32_t* r15_1 = arg3 + 0x68
    int32_t i
    
    do
        int64_t* r14_1 = r12
        r12 = &r12[0xe]
        *r14_1 = *(r15_1 - 0x68)
        r14_1[1].d = r15_1[-0x18]
        
        if (&r14_1[2] != &r15_1[-0x16])
            int64_t rdi_1 = sx.q(r15_1[-4])
            void* rbx_1 = &r14_1[9]
            sub_1405a4aa0(rbx_1, 0, rdi_1.d, 4)
            void* rax_1 = *(r15_1 - 0x18)
            void* rdx = &r15_1[-8]
            void* r9 = *(rbx_1 + 8)
            
            if (rax_1 != 0)
                rdx = rax_1
            
            if (r9 != 0)
                rbx_1 = r9
            
            memcpy(rbx_1, rdx, (rdi_1 << 2).d)
            r14_1[0xb].d = rdi_1.d
            sub_1424c8890(&r14_1[2], &r15_1[-0x16])
        
        if (&r14_1[0xc] != &r15_1[-2])
            int32_t j_2 = r14_1[0xd].d
            
            if (j_2 != 0)
                int64_t* rdi_3 = r14_1[0xc] + 8
                int32_t j
                
                do
                    int64_t* rbx_2 = *rdi_3
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d -= 1
                        
                        if (rbx_2[1].d == 1)
                            (**rbx_2)(rbx_2)
                            int32_t temp3_1 = *(rbx_2 + 0xc)
                            *(rbx_2 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                (*(*rbx_2 + 8))(rbx_2, 1)
                    
                    rdi_3 = &rdi_3[2]
                    j = j_2
                    j_2 -= 1
                while (j != 1)
            
            int32_t j_3 = *r15_1
            void* rbx_3 = *(r15_1 - 8)
            int32_t r8_3 = *(r14_1 + 0x6c)
            r14_1[0xd].d = j_3
            
            if (j_3 != 0 || r8_3 != 0)
                sub_1405a4be0(&r14_1[0xc], j_3, r8_3)
                void* rcx_6 = r14_1[0xc]
                
                if (j_3 != 0)
                    int32_t j_1
                    
                    do
                        *rcx_6 = *rbx_3
                        result = *(rbx_3 + 8)
                        *(rcx_6 + 8) = result
                        
                        if (result != 0)
                            result[1].d += 1
                        
                        rcx_6 += 0x10
                        rbx_3 += 0x10
                        j_1 = j_3
                        j_3 -= 1
                    while (j_1 != 1)
            else
                *(r14_1 + 0x6c) = j_3
        
        r15_1 = &r15_1[0x1c]
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
