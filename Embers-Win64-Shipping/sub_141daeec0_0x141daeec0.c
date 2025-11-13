// 函数: sub_141daeec0
// 地址: 0x141daeec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg2
int32_t rax

if (rdx != 0)
    rax = *(rdx + 0x24)
    
    if (rax != 0 && *(rdx + 0x20) s< rax)
        int64_t* rcx = *arg3
        
        if (rcx != 0)
            if (arg4 != 0)
            label_141daef27:
                void* rax_5 = *arg2
                *(rax_5 + 0x20) += 1
                void* rcx_2 = *arg2
                
                if (0f f!= *(rcx_2 + 0x28))
                    int64_t performanceCount[0x2]
                    QueryPerformanceCounter(&performanceCount)
                    void* rax_7 = *arg2
                    arg5.q = float.d(performanceCount[0])
                    arg5.q = arg5.q f* data_143d796f8
                    arg5.q = arg5.q f+ 16777216.0
                    arg5.q = arg5.q f+ _mm_cvtps_pd((*(rax_7 + 0x28)).q).q
                    *(rax_7 + 0x30) = arg5.q
                else
                    int64_t* rcx_3 = *(rcx_2 + 0x10)
                    (*(*rcx_3 + 0x88))(rcx_3)
                
                int64_t* rbx_1 = arg2[1]
                int64_t var_38 = *arg2
                
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                
                if (&var_38 != arg1 + 0x2f8)
                    arg5 = var_38.o
                    var_38.o = *(arg1 + 0x2f8)
                    *(arg1 + 0x2f8) = arg5
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1, arg5)
                        int32_t temp5_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                sub_140597060(arg2, arg5)
                sub_140669db0(arg3)
                int64_t rax_11
                rax_11.b = 1
                return rax_11
            
            if ((*(*rcx + 0x40))(rcx) s>= 0x1f4)
                int64_t* rcx_1 = *arg3
                
                if ((*(*rcx_1 + 0x40))(rcx_1) s< 0x258)
                    goto label_141daef27
        
        sub_140597060(arg2)
        sub_140669db0(arg3)
        int64_t rax_12
        rax_12.b = 0
        return rax_12

int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rdi_1 = arg3[1]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rbx_3 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rbx_3 == 1)
            (*(*rdi_1 + 8))(rdi_1, zx.q(rbx_3))

rax.b = 0
return rax
