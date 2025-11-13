// 函数: sub_140fc0470
// 地址: 0x140fc0470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = *(arg1 + 0x60d)
*(arg1 + 0x60c) = 0
sub_140f0d950(arg1, arg2, arg3, arg4, arg5)
int128_t var_28

if (rbx == 0)
    int64_t* rbx_1 = *(arg4 + 0x48)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    void* rsi
    
    if (*(arg4 + 0x38) != data_143e1e008 || *(arg1 + 0x60c) == 0)
        rsi.b = 0
    else
        rsi.b = 1
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (rsi.b != 0)
        *(arg1 + 0x60d) = 1
        *(arg1 + 0x60f) = 0
        sub_140910050(&arg1[0xb9])
        void* const rcx_5 = arg1[2]
        int64_t (* rdx)(void* arg1, int512_t arg2 @ zmm1, int64_t arg3 @ zmm0) = nullptr
        
        if (rcx_5 != 0)
            int32_t rax_8 = *(rcx_5 + 8)
            
            if (rax_8 != 0)
                *(rcx_5 + 8) = rax_8 + 1
                rax_8.b = 1
            
            if (rax_8.b == 0)
                rcx_5 = nullptr
            
            if (rcx_5 != 0)
                rdx = arg1[1]
        
        int64_t (* var_38)(void* arg1, int512_t arg2 @ zmm1, int64_t arg3 @ zmm0) = rdx
        int32_t var_30_1 = rcx_5.d
        sub_140eae530(arg2, &var_38)
        void* rbp_1 = data_143e29f28
        var_38 = sub_140fc14c0
        var_30_1 = 0
        var_28 = var_38.o
        int64_t* rax_9 = sub_140f94900(&var_38, arg1, &var_28)
        
        if (rax_9[1].d != 0 && *rax_9 != 0)
            sub_140599630(rbp_1 + 0x4c8, 1)
            
            if (rax_9[1].d != 0)
                int64_t* rcx_9 = *rax_9
                void arg_8
                
                if (rcx_9 != 0)
                    (*(*rcx_9 + 0x30))(rcx_9, &arg_8)
            
            int64_t r15_1 = sx.q(*(rbp_1 + 0x4d0))
            int32_t rax_11 = (r15_1 + 1).d
            *(rbp_1 + 0x4d0) = rax_11
            
            if (rax_11 s> *(rbp_1 + 0x4d4))
                sub_1405a4f90(rbp_1 + 0x4c8)
            
            int64_t rcx_13 = (r15_1 << 4) + *(rbp_1 + 0x4c8)
            *rcx_13 = 0
            *rcx_13 = *rax_9
            *rax_9 = 0
            *(rcx_13 + 8) = rax_9[1].d
            rax_9[1].d = 0
        
        int64_t (* rax_15)(void* arg1, int512_t arg2 @ zmm1, int64_t arg3 @ zmm0)
        
        if (var_30_1 == 0)
            rax_15 = var_38
        label_140fc06b2:
            
            if (rax_15 != 0)
                sub_140a74f90(rax_15)
        else
            int64_t (* rcx_14)(void* arg1, int512_t arg2 @ zmm1, int64_t arg3 @ zmm0) = var_38
            
            if (rcx_14 != 0)
                (*(*rcx_14 + 0x38))(rcx_14, 0)
                rax_15 = var_38
                
                if (rax_15 != 0)
                    rax_15 = sub_140a84c80(rax_15, 0, 0)
                    var_38 = rax_15
                
                var_30_1 = 0
                goto label_140fc06b2
else
    *(arg1 + 0x60d) = 0
    *(arg1 + 0x60f) = 0
    
    if (&arg2[0x38] != &var_28)
        *(arg2 + 0x38) = 0
        int64_t* rcx = *(arg2 + 0x40)
        *(arg2 + 0x40) = 0
        
        if (rcx != 0)
            int32_t temp0_1 = *(rcx + 0xc)
            *(rcx + 0xc) -= 1
            
            if (temp0_1 == 1)
                (*(*rcx + 8))(rcx, 1)
    
    *(arg2 + 0xb4) = (*(arg2 + 0xb4) & 0xffffffdf) | 1
    sub_14095ec70(&arg1[0xbb], 0)
*(arg1 + 0x60c) = 0
return arg2
