// 函数: sub_140ba3170
// 地址: 0x140ba3170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = nullptr
int64_t rbx = sx.q(arg2)
void* result = nullptr

if (arg2 == 0)
    return 0

int16_t* const r15 = &data_142d40450
void*** (* var_48)()

if (arg2 s<= 0)
    if (arg2 s< 0)
        result = *(sx.q(not.d(rbx.d)) * 0x38 + *(*(arg1 + 0x50) + 8) + 0x20)
        goto label_140ba31de
    
label_140ba31eb:
    int32_t r9 = (rbx * 3).d
    int32_t var_4c_1 = 0
    int32_t r8 = (rbx * 2).d
    uint32_t rdx_2 = (rbx.d.q u>> 0x20).d
    int32_t rax_10
    int32_t rcx_2
    
    if (rbx.d s>= 0)
        rcx_2 = r9 - 3
        rax_10 = *(arg1 + 0x564) + rdx_2
    else
        rcx_2 = rdx_2 - 2
        rax_10 = *(arg1 + 0x560) - r8
    
    int64_t r10_1 = *(arg1 + 0x548)
    int64_t rax_12 = sx.q(rcx_2 + rax_10)
    int64_t rax_15
    
    if (*(r10_1 + rax_12 * 0x18 + 0x15) == 0)
        int32_t rcx_8
        
        if (rbx.d s>= 0)
            rcx_8 = r9 - 3 + *(arg1 + 0x564) + rdx_2
        else
            rcx_8 = *(arg1 + 0x560) - r8 - 2 + rdx_2
        
        rax_15 = sx.q(rcx_8)
    
    if (*(r10_1 + rax_12 * 0x18 + 0x15) != 0 || *(r10_1 + rax_15 * 0x18 + 0x14) == 0)
        char arg_10
        char* var_40_1 = &arg_10
        arg_10 = 0
        var_48 = sub_140884c50
        void* r12_1 = *(sub_140a756e0(&var_48, &data_14397f5f0) + 0x48)
        void* r13_1 = *(r12_1 + 0x80)
        
        if (r13_1 == 0)
        label_140ba3321:
            void* rcx_15 = *(r12_1 + 0x80)
            
            if (rcx_15 != 0)
                sub_140d21d80(rcx_15)
            
            int64_t* rax_25 = sub_140baa680(*(arg1 + 0x50), &var_48, rbx.d)
            int16_t* const r9_1
            
            if (rax_25[1].d == 0)
                r9_1 = &data_142d40450
            else
                r9_1 = *rax_25
            
            sub_140af98a0("Unknown", 0xa9e, 
                Missing Dependency, request for %s but it was still waiting for creation.", r9_1)
            void*** (* rcx_17)() = var_48
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
            
            sub_140afbb40()
        else
            void* rax_17 = sub_140bdf2e0()
            void* rdx_3 = *(r13_1 + 0x10)
            int64_t rax_18 = sx.q(*(rax_17 + 0x38))
            
            if (rax_18.d s> *(rdx_3 + 0x38) || *(*(rdx_3 + 0x30) + (rax_18 << 3)) != rax_17 + 0x30)
                goto label_140ba3321
            
            void* rcx_13 = *(arg1 + 0x50)
            int64_t r14_2
            
            if (rbx.d s>= 0)
                r14_2 = *(rcx_13 + 0x18) + (rbx << 7) - 0x80
            else
                r14_2 = sx.q(not.d(rbx.d)) * 0x38 + *(rcx_13 + 8)
            
            void var_58
            int64_t rax_24 = *sub_140bdd7d0(r13_1, &var_58)
            
            if (*r14_2 != rax_24)
                goto label_140ba3321
        
        r13 = nullptr
else
    result = *((rbx << 7) + *(*(arg1 + 0x50) + 0x18) - 0x40)
label_140ba31de:
    
    if (result == 0)
        goto label_140ba31eb

if (arg3 == 0)
label_140ba34d5:
    
    if (result != 0)
        int32_t rax_37 = *(result + 0xc)
        
        if (rax_37 s< data_143e1d9b4)
            int16_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(rax_37)
            uint32_t rdx_15 = zx.d(temp1_1)
            int32_t rax_39 = temp2_1 + rdx_15
            r13 = *(data_143e1d9a0 + (sx.q(rax_39 s>> 0x10) << 3))
                + sx.q(zx.d(rax_39.w) - rdx_15) * 0x18
        
        if (((*(r13 + 8) u>> 0x1c).b & 1) != 0)
            int64_t* rax_46 = sub_140d21830(result, &var_48, 0, 0)
            
            if (rax_46[1].d != 0)
                r15 = *rax_46
            
            sub_140af98a0("Unknown", 0xac2, 
                Returning an object  (%s) from EventDrivenIndexToObject that is unreachable.", r15)
            void*** (* rcx_38)() = var_48
            
            if (rcx_38 != 0)
                sub_140a74f90(rcx_38)
            
            sub_140afbb40()
else
    if (sub_140bc92e0(result) != 0)
        goto label_140ba34d5
    
    int32_t var_50_2 = rbx.d
    int32_t var_4c_2 = 1
    
    if (arg4 == 0)
        void* rcx_20 = *(sub_140baa940() + 0x80)
        
        if (rcx_20 != 0)
            sub_140d21d80(rcx_20)
    
    if (result != 0)
        int32_t r9_2 = (rbx * 3).d
        uint32_t rdx_10 = (var_50_2.q u>> 0x20).d
        int32_t r8_3 = (rbx * 2).d
        int32_t rax_29
        int32_t rcx_21
        
        if (rbx.d s>= 0)
            rcx_21 = r9_2 - 3
            rax_29 = *(arg1 + 0x564) + rdx_10
        else
            rcx_21 = rdx_10 - 2
            rax_29 = *(arg1 + 0x560) - r8_3
        
        int64_t r10_2 = *(arg1 + 0x548)
        int64_t rax_31 = sx.q(rcx_21 + rax_29)
        int64_t rax_34
        
        if (*(r10_2 + rax_31 * 0x18 + 0x15) == 0)
            int32_t rcx_27
            
            if (rbx.d s>= 0)
                rcx_27 = r9_2 - 3 + *(arg1 + 0x564) + rdx_10
            else
                rcx_27 = *(arg1 + 0x560) - r8_3 - 2 + rdx_10
            
            rax_34 = sx.q(rcx_27)
        
        int32_t rdx_12
        wchar16 const* const r8_5
        int16_t* const r9_3
        
        if (*(r10_2 + rax_31 * 0x18 + 0x15) != 0 || *(r10_2 + rax_34 * 0x18 + 0x14) == 0)
            int64_t* rax_36 = sub_140baa680(*(arg1 + 0x50), &var_48, rbx.d)
            
            if (rax_36[1].d == 0)
                r9_3 = &data_142d40450
            else
                r9_3 = *rax_36
            
            r8_5 = u"Missing Dependency, request for %s but it was still waiting for serialization."
            rdx_12 = 0xab9
        else
            int64_t* rax_35 = sub_140baa680(*(arg1 + 0x50), &var_48, rbx.d)
            
            if (rax_35[1].d == 0)
                r9_3 = &data_142d40450
                r8_5 = u"Missing Dependency, request for %s but it was still has RF_NeedLoad."
                rdx_12 = 0xabd
            else
                r9_3 = *rax_35
                r8_5 = u"Missing Dependency, request for %s but it was still has RF_NeedLoad."
                rdx_12 = 0xabd
        
        sub_140af98a0("Unknown", rdx_12, r8_5, r9_3)
        void*** (* rcx_32)() = var_48
        
        if (rcx_32 != 0)
            sub_140a74f90(rcx_32)
        
        sub_140afbb40()
        goto label_140ba34d5

return result
