// 函数: sub_1405b9e20
// 地址: 0x1405b9e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx
int64_t var_8 = rbx
int64_t* arg_8
void* const result

if (*(arg1 + 0x200) == 0)
    *(arg1 + 0x210) = 0
    result = nullptr
else
    int64_t* rcx = *(arg1 + 0x210)
    int64_t rax_1
    int64_t rax_2
    
    if (rcx != 0)
        rax_1 = sub_141bb9010(rcx)
        rax_2 = sub_141bb9010(*(arg1 + 0x200))
    
    if (rcx == 0 || rax_1 != rax_2)
        *(arg1 + 0x210) = sub_142121cc0(*(arg1 + 0x200), arg1)
    
    int64_t* rax_4 = sub_140b58260(&arg_8, u"Input", 1)
    sub_142131d00(*(arg1 + 0x210), *rax_4, arg2)
    result = *(arg1 + 0x210)

int64_t rbp_1 = *(arg1 + 0x200)
*(arg1 + 0x200) = result

if (arg3 != 0)
    result = *(arg1 + 0x1f0)
    
    if (result != 0)
        *(result + 0x258) &= 0xffd77dd9
        *(result + 0x25c) &= 0xff5fcd96
        int64_t rdx_2 = *(arg1 + 0x1f0)
        arg_8 = nullptr
        sub_1405cea20(arg3, rdx_2, &arg_8)
        int64_t* rcx_6 = arg_8
        rbx.b = 1
        
        if (rcx_6 != 0)
            void* rax_5 = sub_141bb9010(rcx_6)
            
            if (*(rax_5 + 0x150) != 4 || *(rax_5 + 0x20c) != 3)
                rbx.b = 0
            
            rcx_6 = arg_8
        
        int64_t r14_1 = *(arg1 + 0x208)
        int64_t* rax_6 = nullptr
        
        if (rbx.b != 0)
            rax_6 = rcx_6
        
        *(arg1 + 0x208) = rax_6
        sub_141f366e0(*(arg1 + 0x1f0))
        *(*(arg1 + 0x1f0) + 0x1f0) = 2
        void* rbx_1 = *(arg1 + 0x1f8)
        void* const var_38 = rbx_1
        void* rax_9
        
        if (rbx_1 == 0)
            rax_9 = nullptr
        else
            rax_9 = sub_140d21950(rbx_1, sub_142475bc0())
        
        sub_1405b2c90(*(arg1 + 0x1f0) + 0x2b0, &var_38, 0x3f800000)
        int64_t arg_18 = *(arg3[2] + 0x18)
        sub_140b63b70(&arg_18, &var_38)
        int64_t* rbx_3 = *(arg1 + 0x1f0) + 0x268
        
        if (rbx_3 != &var_38)
            int64_t rcx_13 = *rbx_3
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
            
            *rbx_3 = var_38
            var_38 = nullptr
            rbx_3[1].d = rax_9.d
            *(rbx_3 + 0xc) = rax_9:4.d
            int64_t var_30_2 = 0
        
        void* const rcx_14 = var_38
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        void* rdi_1 = *(arg1 + 0x1f0)
        char rbx_4 = *(rdi_1 + 0x1f3)
        *(rdi_1 + 0x1f3) = 1
        result = sub_141f35e00(*(arg1 + 0x1f0))
        *(rdi_1 + 0x1f3) = rbx_4
        *(arg1 + 0x208) = r14_1

*(arg1 + 0x200) = rbp_1
return result
