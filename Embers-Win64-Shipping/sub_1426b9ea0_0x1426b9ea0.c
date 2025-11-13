// 函数: sub_1426b9ea0
// 地址: 0x1426b9ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = 0
int32_t arg_8 = 0
sub_140d266d0(arg1)
uint8_t result = (arg1[1].d u>> 4).b

if ((result & 1) != 0)
    return result

void* const r15_1 = arg1[4]
void* rax_1
int64_t rax_2
void* rdx_1

if (r15_1 != 0)
    rax_1 = sub_1425be5e0()
    rdx_1 = *(r15_1 + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (r15_1 == 0 || rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    r15_1 = nullptr

sub_140d19010(arg1, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
arg_8.q = 0
arg1[0x14] = sub_140d2dfc0(sub_14272f510(), arg1, 0, 0, 0, 0, 0, 0, 0)
sub_140d19010(arg1, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
arg_8.q = 0
arg1[0x15] = sub_140d2dfc0(sub_14273a910(), arg1, 0, 0, 0, 0, 0, 0, 0)
sub_140d19010(arg1, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
arg_8.q = 0
arg1[0x1a] = sub_140d2dfc0(sub_14273e470(), arg1, 0, 0, 0, 0, 0, 0, 0)
int16_t* const r12_1 = &data_142d40450
void*** var_38
void* rsi_1

if (arg1[0xe] == 0)
    rsi_1 = nullptr
else
    r14 = 1
    int64_t* rax_10 = sub_140d30800(&arg1[0xe], &var_38)
    int16_t* rbx_1
    
    if (rax_10[1].d == 0)
        rbx_1 = &data_142d40450
    else
        rbx_1 = *rax_10
    
    rsi_1 = sub_140d2f240(sub_142725740(), 0, rbx_1, 0, 0, 0)

if ((r14.b & 1) != 0)
    void*** rcx_9 = var_38
    r14 &= 0xfffffffe
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

if (rsi_1 != 0)
    void* rax_13 = sub_142725740()
    
    if (rax_13 != 0)
        int64_t rax_14 = sx.q(*(rax_13 + 0x38))
        
        if (rax_14.d s<= *(rsi_1 + 0x38) && *(*(rsi_1 + 0x30) + (rax_14 << 3)) == rax_13 + 0x30)
            void* rax_16 = sub_142725740()
            int64_t rax_17
            
            if (rax_16 != 0)
                rax_17 = sx.q(*(rax_16 + 0x38))
            
            if (rax_16 == 0 || rax_17.d s> *(rsi_1 + 0x38)
                    || *(*(rsi_1 + 0x30) + (rax_17 << 3)) != rax_16 + 0x30)
                rsi_1 = nullptr
            
            uint64_t rbx_2 = *sub_140b58260(&arg_8, u"HotSpotManager", 1)
            uint32_t rcx_15
            rcx_15.b = (rbx_2 u>> 0x20).d == 0
            
            if ((rcx_15.b & sub_140b5b8a0(rbx_2.d, 0)) != 0)
                sub_140d19010(arg1, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
            
            arg1[0x19] = sub_140d2dfc0(rsi_1, arg1, rbx_2, 0, 0, 0, 0, 0, 0)

void* rsi_2

if (arg1[0xb] == 0)
    rsi_2 = nullptr
else
    r14 |= 2
    int64_t* rax_22 = sub_140d30800(&arg1[0xb], &var_38)
    
    if (rax_22[1].d != 0)
        r12_1 = *rax_22
    
    rsi_2 = sub_140d2f240(sub_142724fa0(), 0, r12_1, 0, 0, 0)

if ((r14.b & 2) != 0)
    void*** rcx_20 = var_38
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)

if (rsi_2 != 0)
    void* rax_25 = sub_142724fa0()
    
    if (rax_25 != 0)
        int64_t rax_26 = sx.q(*(rax_25 + 0x38))
        
        if (rax_26.d s<= *(rsi_2 + 0x38) && *(*(rsi_2 + 0x30) + (rax_26 << 3)) == rax_25 + 0x30)
            void* rax_28 = sub_142724fa0()
            int64_t rax_29
            
            if (rax_28 != 0)
                rax_29 = sx.q(*(rax_28 + 0x38))
            
            if (rax_28 == 0 || rax_29.d s> *(rsi_2 + 0x38)
                    || *(*(rsi_2 + 0x30) + (rax_29 << 3)) != rax_28 + 0x30)
                rsi_2 = nullptr
            
            uint64_t rbx_3 = *sub_140b58260(&arg_8, u"PerceptionSystem", 1)
            uint32_t rcx_26
            rcx_26.b = (rbx_3 u>> 0x20).d == 0
            
            if ((rcx_26.b & sub_140b5b8a0(rbx_3.d, 0)) != 0)
                sub_140d19010(arg1, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
            
            arg1[0x16] = sub_140d2dfc0(rsi_2, arg1, rbx_3, 0, 0, 0, 0, 0, 0)

if (r15_1 != 0)
    var_38 = nullptr
    void*** rax_34 = sub_140a84c80(0, 0x30, 0)
    var_38 = rax_34
    int32_t var_30_1 = 3
    
    if (rax_34 != 0)
        *rax_34 = &data_142dc0378
        sub_140d3a3a0(&rax_34[1], arg1)
        rax_34[2] = sub_1426a7ef0
        rax_34[4] = sub_140a387b0()
        *rax_34 = &data_142dc03d0
    
    arg1[0x25] = *sub_14242c1e0(r15_1, &arg_8, &var_38)
    void*** rax_38
    
    if (var_30_1 == 0)
        rax_38 = var_38
    label_1426ba327:
        
        if (rax_38 != 0)
            sub_140a74f90(rax_38)
    else
        void*** rcx_32 = var_38
        
        if (rcx_32 != 0)
            (*rcx_32)[7](rcx_32, 0)
            rax_38 = var_38
            
            if (rax_38 != 0)
                rax_38 = sub_140a84c80(rax_38, 0, 0)
                var_38 = rax_38
            
            int32_t var_30_2 = 0
            goto label_1426ba327

return (*(*arg1 + 0x298))(arg1)
