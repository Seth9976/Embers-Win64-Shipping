// 函数: sub_141cc2580
// 地址: 0x141cc2580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t arg_10 = arg2
int64_t* i = *(arg1 + 0xc0)
uint64_t rbx = arg2
int64_t rcx = sx.q(*(arg1 + 0xc8))
int64_t rsi_1 = rcx << 5

for (; i != &i[rcx * 4]; i = &i[4])
    if (*i == rbx)
        if (arg3 == i[1].b)
            return i
        
        return nullptr

int32_t rax = (rcx + 1).d
*(arg1 + 0xc8) = rax

if (rax s> *(arg1 + 0xcc))
    sub_1405c4e40(arg1 + 0xc0)
    rbx = arg_10

int64_t* rsi_2 = rsi_1 + *(arg1 + 0xc0)
void* const rdi_1

if (rsi_1 == neg.q(*(arg1 + 0xc0)))
    rdi_1 = nullptr
    rsi_2 = nullptr
else
    rdi_1 = nullptr
    *rsi_2 = rbx
    rsi_2[2] = 0
    rsi_2[3] = 0
    rsi_2[1].b = arg3
    rbx = arg_10

if (arg3 == 1)
    int64_t* rax_2 = sub_141cc79c0()
    int64_t rax_3 = rax_2[0x23]
    
    if (rax_3 == 0)
        (*(*rax_2 + 0x390))(rax_2)
        rax_3 = rax_2[0x23]
    
    rsi_2[2] = rax_3
else
    int64_t var_58
    int32_t var_50
    int32_t var_4c
    int64_t var_48
    int64_t var_38
    void* rax_14
    
    if (arg3 == 2)
        if ((rbx:4.d == 0 & sub_140b5b8a0(rbx.d, 0)) != 0)
            sub_140d19010(arg1, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
        
        rsi_2[2] = sub_140d2dfc0(sub_141cc7400(), arg1, rbx, 0x40, 0, 0, 0, 0, 0)
        int64_t* rax_8 = sub_140b63b70(&arg_10, &var_38)
        int16_t* const rbx_2 = &data_142d40450
        
        if (rax_8[1].d != 0)
            *rax_8
        
        int64_t* rax_9 = sub_140b24f00(&var_48)
        
        if (rax_9[1].d != 0)
            rbx_2 = *rax_9
        
        sub_140a2e390(&var_58, u"%sTags/%s", rbx_2)
        int64_t* rbx_4 = rsi_2[2] + 0x28
        
        if (rbx_4 != &var_58)
            int64_t rcx_10 = *rbx_4
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            *rbx_4 = var_58
            var_58 = 0
            rbx_4[1].d = var_50
            *(rbx_4 + 0xc) = var_4c
            var_50.q = 0
        
        int64_t rcx_11 = var_58
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        int64_t rcx_12 = var_48
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        int64_t rcx_13 = var_38
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        if (*(arg1 + 0xc) s<= data_143e1d994)
            rax_14 = rsi_2[2]
        label_141cc28af:
            int32_t rax_24 = *(rax_14 + 0xc)
            
            if (rax_24 s< data_143e1d9b4)
                int16_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(rax_24)
                uint32_t rdx_7 = zx.d(temp2_1)
                int32_t rax_26 = temp3_1 + rdx_7
                rdi_1 = *(data_143e1d9a0 + (sx.q(rax_26 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_26.w) - rdx_7) * 0x18
            
            *(rdi_1 + 8) |= 0x40000000
    else if (arg3 == 3)
        if ((rbx:4.d == 0 & sub_140b5b8a0(rbx.d, 0)) != 0)
            sub_140d19010(arg1, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
        
        rsi_2[3] = sub_140d2dfc0(sub_141cc74b0(), arg1, rbx, 0x40, 0, 0, 0, 0, 0)
        int64_t* rax_18 = sub_140b63b70(&arg_10, &var_48)
        int16_t* const rbx_5 = &data_142d40450
        
        if (rax_18[1].d != 0)
            *rax_18
        
        int64_t* rax_19 = sub_140b24f00(&var_38)
        
        if (rax_19[1].d != 0)
            rbx_5 = *rax_19
        
        sub_140a2e390(&var_58, u"%sTags/%s", rbx_5)
        int64_t* rbx_7 = rsi_2[3] + 0x28
        
        if (rbx_7 != &var_58)
            int64_t rcx_21 = *rbx_7
            
            if (rcx_21 != 0)
                sub_140a74f90(rcx_21)
            
            *rbx_7 = var_58
            var_58 = 0
            rbx_7[1].d = var_50
            *(rbx_7 + 0xc) = var_4c
            var_50.q = 0
        
        int64_t rcx_22 = var_58
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        int64_t rcx_23 = var_38
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        int64_t rcx_24 = var_48
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        if (*(arg1 + 0xc) s<= data_143e1d994)
            rax_14 = rsi_2[3]
            goto label_141cc28af

return rsi_2
