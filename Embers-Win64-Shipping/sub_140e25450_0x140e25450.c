// 函数: sub_140e25450
// 地址: 0x140e25450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x910)
int32_t result = (*(*rcx + 0x68))(rcx)

if (result != arg2)
    int64_t r14
    r14.b = result != 2
    
    if (arg2 != 2)
        *(arg1 + 0x798) = *(arg1 + 0x790)
    
    int64_t* rcx_1 = *(arg1 + 0x910)
    *(arg1 + 0xa60) = 0
    (*(*rcx_1 + 0x60))(rcx_1, zx.q(arg2))
    int64_t zmm0
    
    if (*(arg1 + 0x779) s>= 0)
        void* rax_2 = arg1 + 0x7a8
        
        if (not((zx.o(0)).q.d f!= *rax_2))
            rax_2 = arg1 + 0x7a0
        
        zmm0 = *rax_2
    else
        zmm0 = *(arg1 + 0x7a0)
    
    int64_t* rdi_1 = *(arg1 + 0x10)
    int64_t rcx_2 = 0
    int64_t* r15_1 = *(data_143e20d08 + 0x20)
    
    if (rdi_1 != 0)
        int32_t rax_4 = rdi_1[1].d
        
        if (rax_4 != 0)
            rdi_1[1].d = rax_4 + 1
            rax_4.b = 1
        
        if (rax_4.b == 0)
            rdi_1 = nullptr
        
        if (rdi_1 != 0)
            rcx_2 = *(arg1 + 8)
    
    int64_t var_48 = rcx_2
    int64_t* var_40_1 = rdi_1
    
    if (rdi_1 != 0)
        int32_t rax_5 = rdi_1[1].d
        rdi_1[1].d = rax_5
        
        if (rax_5 == 0)
            (**rdi_1)(rdi_1)
            int32_t temp0_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp0_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    result =
        (*(*r15_1 + 0x30))(r15_1, &var_48, int.q(fconvert.t(zmm0.d)), int.q(fconvert.t(zmm0:4.d)))
    int64_t* rcx_6 = *(arg1 + 0x860)
    
    if (rcx_6 != 0)
        char rax_9 = data_1439ae51c
        
        if (arg2 u<= 1)
            rax_9 = data_1439ae51d
        
        var_48.b = rax_9
        var_48:1.b = 1
        int64_t var_40_2 = 0
        int32_t var_38_1 = 0
        result = (*(*rcx_6 + 0x1d8))(rcx_6, &var_48)
    
    if (r14.b != 0)
        result = sub_140e1c780(arg1, *(arg1 + 0x798))
    
    *(arg1 + 0xa60) = 1

return result
