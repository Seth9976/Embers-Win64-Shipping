// 函数: sub_141ff7e10
// 地址: 0x141ff7e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result
void* rcx_4
void* var_88

if (Concurrency::details::are_vista_sync_apis_available() == 0)
    int64_t var_78 = 0
    int32_t var_70_1 = 0
    void* var_68
    sub_140baee70(&var_68, arg2, &var_78)
    int64_t rcx_10 = var_78
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    var_88 = nullptr
    int32_t var_80_1 = 0
    result = sub_140ba7d30(&var_88, &var_68)
    void* rbx_4 = var_88
    int64_t rsi_3 = sx.q(var_80_1)
    void* r15_3 = (rsi_3 << 4) + rbx_4
    
    if (rbx_4 != r15_3)
        do
            void var_58
            sub_140a1dfc0(rbx_4, &var_58)
            sub_140b3d7f0(&var_78, &var_58, 1)
            void var_38
            int64_t* rax_10 = sub_140a1dfc0(&data_143e1a420, &var_38)
            
            if (var_70_1 != rax_10[1].d)
            label_141ff8041:
                uint64_t var_48[0x2]
                uint64_t* rax_11 = sub_140ba59c0(&var_48, rbx_4)
                uint64_t r14_5
                
                if (rax_11[1].d == 0)
                    r14_5 = &data_142d40450
                else
                    r14_5 = *rax_11
                
                int64_t rsi_4 = sx.q(*(arg3 + 0x88))
                int32_t rax_12 = (rsi_4 + 1).d
                *(arg3 + 0x88) = rax_12
                
                if (rax_12 s> *(arg3 + 0x8c))
                    sub_1407c3c00(arg3, rsi_4.d)
                
                void* rax_13 = *(arg3 + 0x80)
                void* rcx_18 = arg3
                
                if (rax_13 != 0)
                    rcx_18 = rax_13
                
                result = sub_140b58260(rcx_18 + (rsi_4 << 3), r14_5, 1)
                uint64_t rcx_20 = var_48[0]
                
                if (rcx_20 != 0)
                    result = sub_140a74f90(rcx_20)
            else
                result = sub_140a22710(&var_78, rax_10, 1)
                
                if (result.d != 0)
                    goto label_141ff8041
            
            rbx_4 += 0x10
        while (rbx_4 != r15_3)
        
        rsi_3 = zx.q(var_80_1)
        rbx_4 = var_88
    
    if (rsi_3.d != 0)
        int32_t i
        
        do
            int64_t rcx_21 = *rbx_4
            
            if (rcx_21 != 0)
                result = sub_140a74f90(rcx_21)
            
            rbx_4 += 0x10
            i = rsi_3.d
            rsi_3 = zx.q(rsi_3.d - 1)
        while (i != 1)
        rbx_4 = var_88
    
    if (rbx_4 != 0)
        result = sub_140a74f90(rbx_4)
    
    rcx_4 = var_68
else
    void arg_20
    int64_t rbx = *sub_140b58260(&arg_20, u"AssetRegistry", 1)
    j_sub_140b3db50()
    int64_t* rax_2 = j_sub_140b407e0(&data_143de7d78, rbx)
    int64_t rdx_1 = *rax_2
    int64_t* rax_3 = (*(rdx_1 + 0x48))(rax_2, rdx_1)
    var_88 = nullptr
    int32_t var_80 = 0
    int16_t* r12_1
    
    if (arg2[1].d == 0)
        r12_1 = &data_142d40450
    else
        r12_1 = *arg2
    
    int64_t rbx_1 = *rax_3
    int64_t* rax_4
    int64_t r9_1
    rax_4, r9_1 = sub_140b58260(&arg_20, r12_1, 1)
    r9_1.b = 1
    result = (*(rbx_1 + 0x20))(rax_3, *rax_4, &var_88, r9_1, 0)
    rcx_4 = var_88
    int64_t rsi_1 = sx.q(var_80)
    void* r14_4 = rsi_1 * 0x50 + rcx_4
    
    if (rcx_4 != r14_4)
        int64_t* rbx_2 = rcx_4 + 8
        
        do
            if ((rbx_2[8].d & 0x20000) == 0)
                int64_t rsi_2 = sx.q(*(arg3 + 0x88))
                int32_t rax_5 = (rsi_2 + 1).d
                *(arg3 + 0x88) = rax_5
                
                if (rax_5 s> *(arg3 + 0x8c))
                    sub_1407c3c00(arg3, rsi_2.d)
                
                void* rax_6 = *(arg3 + 0x80)
                void* rdx_5 = arg3
                
                if (rax_6 != 0)
                    rdx_5 = rax_6
                
                *(rdx_5 + (rsi_2 << 3)) = *rbx_2
            
            rbx_2 = &rbx_2[0xa]
            result = &rbx_2[-1]
        while (result != r14_4)
        
        rsi_1 = zx.q(var_80)
        rcx_4 = var_88
    
    if (rsi_1.d != 0)
        void* rdi_1 = rcx_4 + 0x30
        int32_t i_1
        
        do
            int64_t rcx_6 = *(rdi_1 + 8)
            
            if (rcx_6 != 0)
                result = sub_140a74f90(rcx_6)
            
            int64_t* rbx_3 = *rdi_1
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    result = (**rbx_3)(rbx_3)
                    int32_t temp3_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        result = (*(*rbx_3 + 8))(rbx_3, 1)
            
            rdi_1 += 0x50
            i_1 = rsi_1.d
            rsi_1 = zx.q(rsi_1.d - 1)
        while (i_1 != 1)
        rcx_4 = var_88

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
