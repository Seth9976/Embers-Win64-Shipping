// 函数: sub_142664630
// 地址: 0x142664630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
int32_t rbx = -1

if (*(rax + 0x50) == 0 || (*(rax + 0xb0) & 1) != 0)
    *arg2 = 0xffffffff
else if ((*(*arg4 + 0x48))(arg4) == 0)
    *arg2 = rbx
else
    int64_t rax_4 = (*(*arg4 + 0x50))(arg4)
    int64_t var_88 = rax_4
    int32_t arg_8
    
    if (rax_4 != 0)
        int64_t var_80
        sub_140d3a3a0(&var_80, arg3)
        void* rbx_1 = *arg1
        
        if (sub_1426525a0(rbx_1 + 0x60, var_88, var_80) == 0)
            int64_t* var_78 = &var_88
            int64_t* var_70_1 = &var_80
            sub_1420f29b0(rbx_1 + 0x60, &arg_8, &var_78, nullptr)
        
        goto label_142664780
    
    void* r9 = *(*arg1 + 0x50)
    
    if (r9 == 0)
    label_142664780:
        int32_t rbx_3 = arg5 & 2
        
        if ((arg5.b & 1) != 0)
            rbx_3 = 3
        
        uint128_t var_68
        sub_140d3a3a0(&var_68, arg3)
        uint128_t zmm0_1 = zx.o(data_143dbb1f8.q)
        int32_t rax_11 = data_143dbb200
        char var_34
        char var_34_1 = var_34 & 0xfc
        uint64_t var_44_1 = zmm0_1.q
        uint64_t var_50_1 = zmm0_1.q
        int64_t* var_60_1 = arg4
        int32_t var_54_1 = 0
        int32_t var_3c_1 = rax_11
        char var_38_1 = 0
        int64_t rbx_4 = sx.q(*sub_1426524d0(*arg1, &arg_8, &var_68))
        int64_t* rax_13 = *arg1
        
        if (rbx_4.d == 0xffffffff)
            sub_14263f4a0(rax_13, &arg_8, &var_68, nullptr)
            *arg2 = arg_8
        else
            zmm0_1 = var_68
            int64_t rax_14 = *rax_13
            int64_t rcx_11 = rbx_4 << 6
            *arg2 = rbx_4.d
            *(rcx_11 + rax_14) = zmm0_1
            *(rcx_11 + rax_14 + 0x10) = rbx_3.o
            *(rcx_11 + rax_14 + 0x20) = rax_11.o
            *(rcx_11 + rax_14 + 0x30) = var_38_1.q
    else
        int32_t* rdx_6
        
        if (*(r9 + 0x458) == *(r9 + 0x484))
        label_14266475c:
            rdx_6 = nullptr
        else
            void* r8_2 = r9 + 0x488
            void* rdx_3 = *(r8_2 + 8)
            int64_t r10_1 = sx.q(*(arg3 + 0xc))
            
            if (rdx_3 != 0)
                r8_2 = rdx_3
            
            int32_t rax_8 = *(r8_2 + (((sx.q(*(r9 + 0x498)) - 1) & r10_1) << 2))
            
            if (rax_8 == 0xffffffff)
            label_14266475c_1:
                rdx_6 = nullptr
            else
                while (true)
                    rdx_6 = (sx.q(rax_8) << 5) + *(r9 + 0x450)
                    
                    if (*rdx_6 == r10_1.d)
                        break
                    
                    rax_8 = rdx_6[6]
                    
                    if (rax_8 == 0xffffffff)
                        goto label_14266475c_2
                
                if (rax_8 == 0xffffffff)
                label_14266475c_2:
                    rdx_6 = nullptr
        
        void* rax_9 = &rdx_6[2]
        
        if (rdx_6 == 0)
            rax_9 = nullptr
        
        if (rax_9 == 0)
            goto label_142664780
        
        *arg2 = rbx

return arg2
