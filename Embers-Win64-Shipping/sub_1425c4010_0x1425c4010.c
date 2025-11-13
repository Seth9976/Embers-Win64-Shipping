// 函数: sub_1425c4010
// 地址: 0x1425c4010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg2 + 0x20)
int64_t result
int16_t* var_38
int32_t var_30
uint128_t zmm6

if (rax == 0 || *(rax + 0x38) s> 1)
label_1425c416e:
    int64_t* rbx_1 = *arg1
    uint128_t var_28_1 = zmm6
    zmm6 = zx.o(*arg3)
    int32_t rax_5 = rbx_1[4].d
    int32_t rcx_12 = rax_5
    int16_t arg_8
    
    if (rax_5 != 2 && rax_5 != 4 && rax_5 != 0xc)
        int64_t* rcx_13 = rbx_1[1]
        arg_8 = 0x2c
        (*(*rcx_13 + 0x150))(rcx_13, &arg_8, 2)
        rcx_12 = rbx_1[4].d
    
    if (rcx_12 == 4 || rcx_12 - 8 u<= 3)
        int64_t* rcx_16 = rbx_1[1]
        arg_8 = 0x20
        (*(*rcx_16 + 0x150))(rcx_16, &arg_8, 2)
    else
        sub_1425c9240(rbx_1[1])
        sub_1425ca100(rbx_1[1], *(rbx_1 + 0x24))
    
    sub_140a2e390(&var_38, u"%.17g", zmm6.q)
    int64_t* r10_1 = rbx_1[1]
    int32_t r8_3
    int16_t* const r9_1
    
    if (var_30 == 0)
        r8_3 = 0
        r9_1 = &data_142d40450
    else
        r9_1 = var_38
        r8_3 = var_30 - 1
    
    uint64_t rcx_19
    
    if (r9_1 == 0)
        r9_1 = nullptr
        rcx_19 = 0
    else
        if (r8_3 s> 0 && r9_1[sx.q(r8_3) - 1] == 0)
            r8_3 -= 1
        
        if (r8_3 != 0xffffffff)
            rcx_19 = zx.q(r8_3)
        else
            rcx_19 = -1
            
            do
                rcx_19 += 1
            while (r9_1[rcx_19] != 0)
    
    result = (*(*r10_1 + 0x150))(r10_1, r9_1, sx.q(rcx_19.d) * 2)
    int16_t* rcx_21 = var_38
    
    if (rcx_21 != 0)
        result = sub_140a74f90(rcx_21)
    
    rbx_1[4].d = 8
else
    zmm6 = sub_140cea1e0()
    
    if (sub_140cc1670(rax + 0x10, &data_143e1b870) != 0 && *(rax + 0x10) != 0)
        goto label_1425c416e
    
    void* rdi_2 = *(arg2 + 0x20)
    zmm6 = sub_140d11d60()
    
    if (sub_140cc1670(rdi_2 + 0x10, &data_143e1c310) != 0 && *(rdi_2 + 0x10) != 0)
        goto label_1425c416e
    
    int64_t* rcx_2 = *(arg2 + 0x10)
    
    if (rcx_2 == 0)
        void* rcx_5 = *(arg2 + 0x20)
        
        if (rcx_5 == 0)
            var_38 = nullptr
            var_30.q = 0
            sub_1405947f0(&var_38, 5)
            int32_t var_30_1 = var_30 + 5
            int32_t var_2c
            
            if (var_30 + 5 s> var_2c)
                sub_140594770(&var_38)
            
            UnDecorator::getReferenceType(var_38, u"None", 0xa)
        else
            sub_140b63b70(rcx_5 + 0x28, &var_38)
        
        result = sub_1425c4890(*arg1, &var_38, zx.o(*arg3))
        int16_t* rcx_11 = var_38
        
        if (rcx_11 != 0)
            result = sub_140a74f90(rcx_11)
    else
        int64_t r8 = *(arg2 + 8)
        var_38 = nullptr
        var_30.q = 0
        (*(*rcx_2 + 0xa0))(rcx_2, &var_38, r8, 0, 0, 0, 0)
        result = sub_1425c4890(*arg1, &var_38, zx.o(*arg3))
        int16_t* rcx_4 = var_38
        
        if (rcx_4 != 0)
            result = sub_140a74f90(rcx_4)
int64_t* rbx_2 = arg1[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
