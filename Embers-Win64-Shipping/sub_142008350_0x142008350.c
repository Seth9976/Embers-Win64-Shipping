// 函数: sub_142008350
// 地址: 0x142008350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r15 = 0
int64_t performanceCount
performanceCount.d = 0
sub_1423e0df0(arg1, arg2)
int64_t* rax = sub_1423dd380(arg1)
int64_t r8 = *rax
(*(r8 + 0x298))(rax, 0, r8)
int64_t* rax_1 = sub_1423dd380(arg1)
int64_t rdx = *rax_1
(*(rdx + 0x268))(rax_1, rdx)
int64_t* rax_2 = sub_141520bd0()
void* rdx_1 = rax_2[0x23]

if (rdx_1 == 0)
    int64_t rdx_2 = *rax_2
    (*(rdx_2 + 0x390))(rax_2, rdx_2)
    rdx_1 = rax_2[0x23]

int64_t var_48 = *(rdx_1 + 0x58)
int64_t* var_40
sub_140596d10(&var_40, rdx_1 + 0x60)
int16_t* const r14 = &data_142d40450
int16_t* var_58
int64_t* rax_6

if (var_48 == 0)
    rax_6 = sub_1424ae9b0()
else
    int64_t* rax_4 = sub_140d30800(&var_48, &var_58)
    int16_t* rbx_1
    
    if (rax_4[1].d == 0)
        rbx_1 = &data_142d40450
    else
        rbx_1 = *rax_4
    
    rax_6 = sub_140d2f6f0(sub_140bdf2e0(), 0, rbx_1, 0, 0, 0, 1, 0)
    r15 = 1

int64_t* rsi = rax_6

if ((r15 & 1) != 0)
    int16_t* rcx_8 = var_58
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)

if (rsi == 0)
    rsi = sub_1424ae9b0()

performanceCount = 0

if ((1 & sub_140b5b8a0(0, 0)) != 0)
    sub_140d19010(arg1, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

void* rax_9 = sub_140d2dfc0(rsi, arg1, 0, 0, 0, 0, 0, 0, 0)
arg1[0x1bd] = rax_9
performanceCount = 0
sub_142031840(rax_9, 0, nullptr)
int64_t* rcx_12 = var_40

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t* rsi_1 = nullptr

if (data_143de5429 != 0)
    performanceCount = 0
    int64_t* rsi_2
    
    if (arg1[0x23] == 0)
        rsi_2 = nullptr
    else
        void* rax_10 = sub_1424bff10()
        
        if (rax_10 == 0)
            rsi_2 = nullptr
        else
            rsi_2 = arg1[0x23]
            int64_t rax_11 = sx.q(*(rax_10 + 0x38))
            
            if (rax_11.d s> rsi_2[7].d || *(rsi_2[6] + (rax_11 << 3)) != rax_10 + 0x30)
                rsi_2 = nullptr
    
    char rax_13 = sub_140b5b8a0(0, 0)
    uint64_t performanceCount_1 = performanceCount
    uint32_t rcx_15
    rcx_15.b = (performanceCount_1 u>> 0x20).d == 0
    
    if ((rcx_15.b & rax_13) != 0)
        sub_140d19010(arg1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    void* rax_14
    int64_t r9_1
    rax_14, r9_1 = sub_140d2dfc0(rsi_2, arg1, performanceCount_1, 0, 0, 0, 0, 0, 0)
    void* rdx_8 = arg1[0x1bd]
    r9_1.b = 1
    rsi_1 = rax_14
    (*(*rax_14 + 0x278))(rax_14, *(rdx_8 + 0x30), rdx_8, r9_1)
    void* rcx_19 = arg1[0x1bd]
    arg1[0xf1] = rsi_1
    *(*(rcx_19 + 0x30) + 0x210) = rsi_1

int64_t result
int32_t r8_4
result, r8_4 = QueryPerformanceCounter(&performanceCount)
arg1[0x1c5] = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0

if (rsi_1 != 0)
    void* rax_15
    
    if (arg1[0x1be] != 0)
        rax_15 = arg1[0x1bf]
    
    if (arg1[0x1be] == 0 || rax_15 == 0 || *(rax_15 + 8) s<= 0)
        r15 = 0
        int64_t** rax_16
        rax_16, r8_4 = sub_141fff880(&var_48)
        arg1[0x1be] = *rax_16
        void* rbx_2 = rax_16[1]
        int64_t* rcx_23 = arg1[0x1bf]
        
        if (rbx_2 != rcx_23)
            if (rbx_2 != 0)
                *(rbx_2 + 0xc) += 1
                rcx_23 = arg1[0x1bf]
            
            if (rcx_23 != 0)
                int32_t temp2_1 = *(rcx_23 + 0xc)
                *(rcx_23 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    r8_4 = (*(*rcx_23 + 8))(rcx_23, 1)
            
            arg1[0x1bf] = rbx_2
        
        int64_t* rbx_3 = var_40
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                r8_4 = (**rbx_3)(rbx_3)
                int32_t temp1_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    r8_4 = (*(*rbx_3 + 8))(rbx_3, 1)
    else
        r15 = 1
    
    int32_t r8_5
    int512_t zmm1_1
    r8_5, zmm1_1 = sub_141ffea40(arg1, rsi_1, r8_4)
    
    if (r15 == 0)
        sub_142010cb0(arg1, zmm1_1, r8_5)
    
    int64_t rax_20 = *rsi_1
    var_58 = nullptr
    int32_t var_50_1 = 0
    
    if ((*(rax_20 + 0x2e0))(rsi_1, &var_58) == 0)
        if (var_50_1 != 0)
            r14 = var_58
        
        sub_140af98a0("Unknown", 0x46d, u"%s", r14)
        sub_140afbb40()
    
    result = sub_140599090(&data_143a2e0a8)
    int16_t* rcx_29 = var_58
    
    if (rcx_29 != 0)
        result = sub_140a74f90(rcx_29)

arg1[0x147].b = 1
return result
