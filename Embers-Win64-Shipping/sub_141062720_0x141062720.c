// 函数: sub_141062720
// 地址: 0x141062720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
void* var_110 = arg1
int32_t var_120 = arg2
int64_t var_108 = *(arg1 + 0x20)
int64_t* var_128 = nullptr
int64_t var_100
int64_t var_e0
void* var_c8

if (arg5 == 0)
    int64_t* rcx_3 = *arg7
    
    if (rcx_3 == 0)
        int32_t rcx_4 = 1
        
        if (data_143f0f1d8 == 0)
            rcx_4 = *(arg1 + 0x10)
        
        var_100 = 1
        int32_t var_f8_1 = 0
        int32_t var_f4_1 = *(arg1 + 0x18)
        int32_t var_d0_1 = rcx_4
        var_e0.o = var_100.o
        var_c8.d = 3
        int64_t var_c0_1 = 0
        uint64_t var_b8_1 = zx.q(arg3)
        int64_t var_b0
        var_b0.d = arg4
        var_b0:4.d = 0x10001
        int64_t var_a8
        var_a8.d = sub_140fe89c0(arg2)
        var_a8 = 1
        int32_t var_9c_1 = 0
        int32_t var_98_1 = 1
        int64_t* rax_10 = sub_141022ce0(arg1)
        int64_t* rcx_7 = var_128
        
        if (rcx_7 != 0)
            int64_t rdx_1 = *rcx_7
            (*(rdx_1 + 0x10))(rcx_7, rdx_1)
        
        int64_t var_148
        var_148.d = 0
        (*(*rax_10 + 0xd8))(rax_10, &var_e0, 0, &var_c8, var_148, 0, &data_142f017a8, &var_128)
    else
        var_128 = rcx_3
        (*(*rcx_3 + 8))()
else
    int32_t rax_4 = (*(*arg5 + 0x48))(arg5, zx.q(arg6), &data_142f017a8, &var_128)
    
    if (rax_4 s< 0)
        void* rcx_1 = var_110
        var_e0 = 0
        int64_t var_d8_1 = 0
        int64_t* var_140_1 = &var_e0
        sub_14106a020(rax_4, 
            "SwapChain->GetBuffer(BackBufferIndex, IID_PPV_ARGS(BackBufferResource.GetInitReference()))", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Viewport.cpp", 0xc5, 
            sub_141022ce0(rcx_1))

int64_t* rcx_9 = var_128
void var_90
(*(*rcx_9 + 0x50))(rcx_9, &var_90)
char rcx_10 = (data_1439c7a34).b
var_c8 = &var_90
void*** result = nullptr
int32_t r14 = 1 << rcx_10
int64_t rcx_11 = var_108
void*** result_2 = nullptr
int32_t* var_c0_2 = &var_120
void** var_b8_2 = &var_110
int64_t* var_b0_1 = &var_128
int64_t* var_a8_1 = &var_108
var_e0 = rcx_11
int32_t i_1 = r14 - 1

if (r14 != 1)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(i_1)
    int32_t r12_1 = temp0_1
    int32_t i
    
    do
        void*** result_1 = sub_14105d770(&var_c8, *(rcx_11 + (zx.q(r12_1) << 3) + 0x9d8))
        
        if (result_2 != 0)
            void* rbx_3 = &result_1[0xd]
            
            if (result_1 == 0)
                rbx_3 = nullptr
            
            int64_t* rsi_1 = result_2[0x24]
            result_2[0x24] = rbx_3
            
            if (rbx_3 != 0)
                (*(*rbx_3 + 8))(rbx_3)
            
            if (rsi_1 != 0)
                (*(*rsi_1 + 0x10))(rsi_1)
            
            if (rbx_3 != 0)
                *(rbx_3 + 0xc0) = 0
        else
            result = result_1
        
        result_2 = result_1
        int32_t rax_16 = not.d(1 << r12_1.b)
        r12_1 = 0x20
        i = rax_16 & i_1
        i_1 = i
        
        if (i != 0)
            uint64_t rflags_2
            int32_t temp0_2
            temp0_2, rflags_2 = _bit_scan_forward(i)
            r12_1 = temp0_2
        
        rcx_11 = var_e0
    while (i != 0)

sub_140a2e390(&var_100, u"BackBuffer%d", zx.q(arg6))
j_sub_14103af50(result)
int64_t rcx_18 = var_100

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

int64_t* rcx_19 = var_128

if (rcx_19 != 0)
    int64_t rdx_5 = *rcx_19
    (*(rdx_5 + 0x10))(rcx_19, rdx_5)

int64_t* rcx_20 = *arg7

if (rcx_20 != 0)
    int64_t rdx_6 = *rcx_20
    (*(rdx_6 + 0x10))(rcx_20, rdx_6)

__security_check_cookie(rax_1 ^ &var_168)
return result
