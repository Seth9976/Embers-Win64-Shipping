// 函数: sub_141058930
// 地址: 0x141058930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t rax_1 = __security_cookie ^ &var_338
void* rax_4 = *(**(arg1 + 0x20) + 0x9d8)
void* r15 = *(rax_4 + 0x20)
int32_t rbx = *(rax_4 + 0x10)
void* rax_6 = **(rax_4 + 0x6d8)
void* rax_8 = nullptr

if (arg3 != 0)
    rax_8 = (*(*arg3 + 0x48))(arg3)

int32_t rdi = arg4[2]
int32_t r11 = *arg4
int32_t r10 = arg4[3]
int32_t rax_11 = rdi - r11
int32_t r9 = arg4[1]
void* r13 = *(rax_8 + 0x58)
int32_t rsi_2 = r10 - r9
uint64_t k_2 = zx.q(sub_140fdf270(*(r13 + 0xa8)))
int32_t rax_13 = *(r13 + 0xac)
uint64_t var_90 = zx.q(rax_11)
char var_2f8 = 1
int32_t var_ac = rdi
bool cond:0 = data_143f0f1d8 != 0
int32_t var_b4 = r9
int32_t var_a4 = 1
int32_t var_88 = rsi_2
int32_t rsi_3 = 4
int64_t var_288 = 1
int32_t* var_300 = nullptr
int32_t var_b0 = 0
int64_t var_9c = 0
int32_t var_94 = 0
int32_t var_74 = 0
int32_t var_6c = 0
int32_t var_b8 = r11
int32_t var_a8 = r10
int32_t var_a0 = 3
int32_t var_84 = 0x10001
int32_t rax_15 = *(r13 + 0xa8)
int32_t rax_16 = rbx

if (cond:0)
    rax_16 = 1

int64_t var_7c = 1
int32_t var_27c = rax_16
int32_t var_58 = rax_16
int64_t* result_1
void** var_308 = &result_1
int32_t var_70 = 1
int32_t var_280 = 0
int128_t* var_310 = nullptr
int32_t var_2b0
int32_t* var_318 = &var_2b0
int128_t var_68 = var_288.o
var_2b0 = 4
result_1 = nullptr
int32_t rax_17 =
    sub_141048420(r15, &var_a0, rbx, &var_68, var_318, var_310, var_308, var_300, var_2f8)

if (rax_17 s< 0)
    int64_t var_198 = 0
    int64_t* var_310_1 = &var_198
    int64_t var_190_1 = 0
    sub_14106a020(rax_17, 
        "Adapter->CreateCommittedResource(NonMSAADesc, NodeMask, HeapProps, "
    "D3D12_RESOURCE_STATE_RENDER_TARGET, nullptr, NonMSAATexture2D.GetInitReference(), nullptr)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12RenderTarget.cpp", 0x50c, 
        nullptr)

int32_t var_210 = 0
int64_t zmm0_1 = (zx.o(0)).q
int64_t* var_1f8 = nullptr
int64_t* result_3 = result_1
void* var_218 = rax_4
int32_t var_1f0 = 0
int64_t var_1e8
__builtin_memset(&var_1e8, 0, 0x2c)
int16_t var_1b8 = 0xff00
sub_141014320(&var_218, result_3, 0, 0)
int64_t var_224 = 0
int32_t var_21c = 0
int32_t var_230

if (rax_15 == 0x1b)
    var_230 = 0x1c
else
    int32_t rax_19 = 0x57
    
    if (rax_15 != 0x5a)
        rax_19 = rax_15
    
    var_230 = rax_19

int64_t var_22c = 4
void*** rax_20 = j_sub_140a82f30(0x88)
void*** var_290

if (rax_20 == 0)
    var_290 = rax_20
else
    void*** rax_21 = sub_14103f110(rax_20, rax_4, &var_230, &var_218)
    var_290 = rax_21
    
    if (rax_21 != 0)
        rax_21[0xd].d += 1
        result_3 = result_1

int32_t rax_25 = (&data_1439c85f4)[sx.q(*(arg3 + 0x3c)) * 0xa] * rax_11
var_300.d = 0
int32_t* var_308_1 = nullptr
int64_t* var_2b8 = nullptr
int32_t rax_27 = (rax_25 + 0xff) & 0xffffff00
int64_t* var_310_2 = &var_2b8
void** var_318_2 = zx.q(rax_27 * rsi_2)
int32_t rax_29
int128_t zmm2
int128_t zmm3
int128_t zmm6
rax_29, zmm2, zmm3, zmm6 = sub_141048240(r15, 3, rbx, zx.q(rbx), var_318_2, var_310_2, var_308_1.d)

if (rax_29 s< 0)
    int64_t var_188 = 0
    var_310_2 = &var_188
    int64_t var_180_1 = 0
    var_318_2 = nullptr
    zmm2, zmm3, zmm6 = sub_14106a020(rax_29, 
        "Adapter->CreateBuffer(D3D12_HEAP_TYPE_READBACK, NodeMask, NodeMask, MipBytesAligned, "
    "StagingTexture2D.GetInitReference(), nullptr)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12RenderTarget.cpp", 0x521, 
        var_318_2)

uint32_t rcx_18

if ((*(rax_8 + 0x19c) & 1) == 0)
    rcx_18 = zx.d(*(arg6 + 0x11))
else
    int32_t rcx_11 = *arg6
    
    if (rcx_11 == 1)
        rsi_3 = 1
    else if (rcx_11 == 2)
        rsi_3 = 2
    else if (rcx_11 == 3)
        rsi_3 = 3
    else if (rcx_11 != 4)
        if (rcx_11 == 5)
            rsi_3 = 5
        else
            rsi_3 = 0
    
    rcx_18 = *(arg3 + 0x34) * rsi_3 + zx.d(*(arg6 + 0x11))

int32_t rdx_5 = 0
int64_t* rbx_1 = var_2b8
int32_t r9_4 = rsi_2
int32_t r8_3 = rax_11
int32_t var_120 = rax_27
int64_t* rax_35 = &rbx_1[4]
int32_t var_158 = r9_4
int32_t var_15c = r8_3
int32_t var_154 = 1
int32_t var_11c = 0
int64_t var_138 = 0
int128_t var_130 = (*(r13 + 0xa8)).o
int64_t var_e8 = *rax_35
int32_t var_e0 = 1
int64_t* var_2d8 = rbx_1
int128_t var_d8 = var_138.o
int128_t var_c8 = var_130
int32_t rcx_19 = *(arg5 + 0xc)
int64_t var_118 = result_3[4]
int32_t var_110 = 0
arg5[1].d = 0

if (rcx_19 != 0)
    sub_1405c5510(arg5, 0)
    rdx_5 = arg5[1].d
    rcx_19 = *(arg5 + 0xc)
    r8_3 = rax_11
    r9_4 = rsi_2

int32_t rax_42 = rax_13 * k_2.d * r9_4 * r8_3 + rdx_5
arg5[1].d = rax_42

if (rax_42 s> rcx_19)
    sub_1405daba0(arg5)
    r8_3 = rax_11
    r9_4 = rsi_2

int32_t var_2c8 = 0
int32_t r14_2 = 0
int32_t var_2f0
char var_2e8

if (rax_13 != 0)
    void* rax_43 = result_3 + 0xfc
    void* r13_1 = rax_6 + 0x1c0
    
    do
        int64_t var_250 = 0
        int32_t var_240 = *arg4
        int32_t var_23c_1 = arg4[1]
        int32_t var_238_1 = arg4[2]
        int32_t var_234_1 = arg4[3]
        int32_t var_248_1 = r8_3
        int32_t var_244_1 = r9_4
        var_2f0 = r14_2
        var_2f8.q = &var_250
        var_300 = &var_240
        sub_14103ccd0(rax_6, arg2, (*(*arg3 + 8))(arg3), nullptr, zmm2, zmm3, zmm6, var_290, 
            nullptr, &var_a0, var_300, var_2f8, var_2f0)
        int32_t var_2bc_1 = 0xffffffff
        int32_t* var_2a8
        var_2a8.d = rcx_18
        var_2e8 = 0
        
        if (*rax_43 != 0)
            sub_141037220(r13_1, result_3, 0x800, rcx_18)
        else
            int32_t r14_3 = result_3[0x1e].d
            var_2bc_1 = r14_3
            
            if (r14_3 != 0x800)
                var_2e8 = 1
                var_318_2.d = rcx_18
                sub_1410129f0(r13_1, result_3, r14_3, 0x800, var_318_2.d)
        
        var_308_1 = &var_b8
        var_310_2 = &var_118
        *(rax_6 + 0x3b90) += 1
        var_318_2.d = 0
        int64_t* rcx_27 = *(*(r13_1 + 8) + 0x30)
        (*(*rcx_27 + 0x80))(rcx_27, &var_e8, 0, 0, var_318_2, var_310_2, var_308_1)
        void* rdx_10 = rbx_1[5]
        char rax_58 = data_1439b4ad4
        
        if (rdx_10 == 0)
            if (rax_58 != 0 && rbx_1[7] != 0)
                sub_141026da0(*(*(r13_1 + 8) + 0x118), &rbx_1[6])
                rax_58 = data_1439b4ad4
        else if (rax_58 != 0 && *(rdx_10 + 0x30) != 0)
            sub_141026da0(*(*(r13_1 + 8) + 0x118), rdx_10 + 0x28)
            rax_58 = data_1439b4ad4
        
        void* rdx_12 = result_3[5]
        
        if (rdx_12 == 0)
            if (rax_58 != 0 && result_3[7] != 0)
                sub_141026da0(*(*(r13_1 + 8) + 0x118), &result_3[6])
        else if (rax_58 != 0 && *(rdx_12 + 0x30) != 0)
            sub_141026da0(*(*(r13_1 + 8) + 0x118), rdx_12 + 0x28)
        
        void** var_178
        zmm2, zmm3, zmm6 = sub_141022330(**(rax_4 + 0x6d8), &var_178, 1)
        var_178 = &data_142efcd90
        int64_t* var_170
        
        if (var_170 != 0)
            int32_t rax_60 = *(var_170 + 0x14)
            *(var_170 + 0x14) -= 1
            
            if (rax_60 == 1 && var_170 != 0)
                sub_14100eba0(var_170)
                j_sub_140a74f90(var_170)
            
            rbx_1 = var_2b8
            result_3 = result_1
            var_2d8 = rbx_1
        
        int64_t* rcx_39 = *rax_35
        int64_t var_148
        int32_t rax_62 = (*(*rcx_39 + 0x40))(rcx_39, 0, 0, &var_148)
        
        if (rax_62 s< 0)
            var_310_2 = &var_288
            var_318_2 = nullptr
            var_288 = 0
            var_280.q = 0
            zmm2, zmm3, zmm6 = sub_14106a020(rax_62, 
                "StagingTexture2D->GetResource()->Map(0, nullptr, &pData)", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12RenderTarget.cpp", 
                0x56a, var_318_2)
        
        int32_t i = arg4[1]
        
        if (i s< arg4[3])
            int32_t r9_8 = arg4[2]
            
            do
                int32_t j = *arg4
                int32_t rdx_17 = i - arg4[1]
                char* r8_9 = zx.q(j * k_2.d) + zx.q(rdx_17 * rax_27) + var_148
                char* rax_66 = sx.q((var_2c8 + rdx_17 * rax_13 * rax_11) * k_2.d) + *arg5
                
                for (; j s< r9_8; j += 1)
                    if (k_2.d != 0)
                        uint64_t k_1 = k_2
                        uint64_t k
                        
                        do
                            char rcx_44 = *r8_9
                            r8_9 = &r8_9[1]
                            *rax_66 = rcx_44
                            rax_66 = &rax_66[1]
                            k = k_1
                            k_1 -= 1
                        while (k != 1)
                    
                    r9_8 = arg4[2]
                    rax_66 = &rax_66[zx.q((rax_13 - 1) * k_2.d)]
                
                i += 1
            while (i s< arg4[3])
            
            result_3 = result_1
            rbx_1 = var_2d8
            r13_1 = rax_6 + 0x1c0
        
        int64_t* rcx_45 = *rax_35
        (*(*rcx_45 + 0x48))(rcx_45, 0, 0)
        
        if (var_2e8 != 0)
            var_318_2.d = var_2a8.d
            sub_1410129f0(r13_1, result_3, 0x800, var_2bc_1, var_318_2.d)
        
        r8_3 = rax_11
        r14_2 = var_2c8 + 1
        r9_4 = rsi_2
        var_2c8 = r14_2
    while (r14_2 u< rax_13)

rbx_1[1].d -= 1

if (rbx_1[1].d == 1)
    int64_t* rcx_47 = var_2b8
    (**rcx_47)(rcx_47, 1, r8_3, r9_4, var_318_2, var_310_2, var_308_1, var_300, var_2f8, var_2f0, 
        var_2e8, rsi_2, var_2d8)

if (var_290 != 0)
    var_290[0xd].d -= 1
    
    if (var_290[0xd].d == 1)
        if (var_290[0xe].b != 0)
            (*var_290[0xc])(&var_290[0xc], 1)
        else
            char rax_74
            
            if (data_143f0f1d0 == 0)
                rax_74 = sub_1405949a0()
            
            if (data_143f0f1d0 == 0 && rax_74 != 0)
                (*var_290[0xc])(&var_290[0xc], 1)
            else
                bool z_1
                
                if (0 == *(var_290 + 0x6c))
                    *(var_290 + 0x6c) = 1
                    z_1 = true
                else
                    *(var_290 + 0x6c)
                    z_1 = false
                
                if (z_1)
                    sub_1405dcc10(&data_143f02390, &var_290[0xc])

int64_t rcx_49

if (var_210 == 1)
label_14105926d:
    rcx_49 = zmm0_1
    
    if (*(rcx_49 + 0xfe) == 0)
    label_1410592a3:
        int32_t rax_79 = *(rcx_49 + 8)
        *(rcx_49 + 8) -= 1
        
        if (rax_79 == 1 && rcx_49 != 0)
            (**rcx_49)(rcx_49, 1)
    else
        sub_141049740(rcx_49)
else if (var_210 == 2)
    int32_t var_1c0
    
    if (var_1b8:1.b != 1)
        sub_14101be70(var_1f8, &var_218)
    else
        sub_14101bf40(var_1f8, zmm0_1, var_1f0, var_1c0)
else if (var_210 s> 4)
    if (var_210 s<= 6)
        rcx_49 = zmm0_1
        
        if (*(rcx_49 + 0xfe) == 0)
            goto label_1410592a3
        
        int32_t rax_78 = 0
        
        if (0 == *(rcx_49 + 8))
            *(rcx_49 + 8) = 0
        else
            rax_78 = *(rcx_49 + 8)
        
        rcx_49 = zmm0_1
        
        if (rax_78 != 1)
            goto label_1410592a3
        
        sub_141049740(rcx_49)
    else if (var_210 == 7)
        goto label_14105926d
int64_t* result = result_1
result[1].d -= 1

if (result[1].d == 1)
    int64_t* result_2 = result_1
    result = (**result_2)(result_2, 1)

__security_check_cookie(rax_1 ^ &var_338)
return result
