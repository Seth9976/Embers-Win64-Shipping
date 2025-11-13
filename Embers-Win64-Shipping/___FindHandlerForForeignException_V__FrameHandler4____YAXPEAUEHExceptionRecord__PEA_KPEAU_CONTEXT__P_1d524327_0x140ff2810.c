// 函数: ??$FindHandlerForForeignException@V__FrameHandler4@@@@YAXPEAUEHExceptionRecord@@PEA_KPEAU_CONTEXT@@PEAU_xDISPATCHER_CONTEXT@@PEAUFuncInfo4@@HH1@Z
// 地址: 0x140ff2810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
void*** rdi = nullptr
int64_t* r14

if (arg3 != 0)
    r14 = (*(*arg3 + 0x48))(arg3)
else
    r14 = nullptr

int32_t rcx_4
uint32_t var_120_2
uint32_t var_11c_2

if ((*(*arg3 + 0x18))(arg3) == 0)
    if ((*(*arg3 + 0x10))(arg3) == 0)
        void* rcx_9 = &r14[7]
        
        if ((*(*arg3 + 0x20))(arg3) == 0)
            if (r14 == 0)
                rcx_9 = 0xa0
            
            int64_t* rcx_11 = *rcx_9
            void var_d8
            (*(*rcx_11 + 0x50))(rcx_11, &var_d8)
            int32_t var_c8
            rcx_4 = var_c8
            int32_t var_c4
            
            if (var_c4 u<= 1)
                int32_t var_124_4 = 4
                var_120_2 = zx.d(arg4[1])
                var_11c_2 = zx.d(arg4[2])
            else
                int32_t var_124_3 = 6
        else
            if (r14 == 0)
                rcx_9 = 0xa8
            
            int64_t* rcx_10 = *rcx_9
            void var_80
            (*(*rcx_10 + 0x50))(rcx_10, &var_80)
            int32_t var_70
            rcx_4 = var_70
            int32_t var_124_2 = 9
            var_120_2 = zx.d(arg4[1])
            var_11c_2 = zx.d(arg4[2])
    else
        void* rcx_6 = &r14[7]
        
        if (r14 == 0)
            rcx_6 = 0xa8
        
        int64_t* rcx_7 = *rcx_6
        void var_108
        (*(*rcx_7 + 0x50))(rcx_7, &var_108)
        int32_t var_f8
        rcx_4 = var_f8
        uint32_t var_120_1 = zx.d(arg4[1])
        uint32_t var_11c_1 = zx.d(arg4[2])
        int32_t var_118_1 = *(arg4 + 8)
        int32_t rax_13 = *(arg4 + 0xc)
        int32_t var_124_1 = 5
        int32_t var_fc
        
        if (rax_13 == 0)
            rax_13 = var_fc
        int32_t var_114_1 = rax_13
else
    int64_t* rcx_2 = &r14[7]
    
    if (r14 == 0)
        rcx_2 = 0xa8
    
    int64_t* rcx_3 = *rcx_2
    void var_a8
    (*(*rcx_3 + 0x50))(rcx_3, &var_a8)
    int32_t var_98
    rcx_4 = var_98
    int32_t var_124 = 8
    var_120_2 = zx.d(arg4[1])
    var_11c_2 = zx.d(arg4[2])
char rdx_1

if (*(arg4 + 4) == 1 || ((arg3[8].d u>> 4).b & 1) == 0)
    rdx_1 = 0
else
    rdx_1 = 1

char rax_22 = *arg4

if (rax_22 != 0)
    rcx_4 = (&data_1439c85fc)[zx.q(rax_22) * 0xa]

int32_t rax_24 = sub_140fe7330(rcx_4, rdx_1)
int64_t* rcx_13 = *(arg1 + 0x168)
int32_t var_128 = rax_24
int64_t* var_110 = nullptr
int32_t rax_26 = (*(*rcx_13 + 0x38))(rcx_13, r14[7], &var_128, &var_110)

if (rax_26 s< 0)
    int64_t var_138_1 = *(arg1 + 0x168)
    sub_140fff020(rax_26, 
        "Direct3DDevice->CreateShaderResourceView(Texture->GetResource(), &SRVDesc, "
    "(ID3D11ShaderResourceView**)ShaderResourceView.GetInitReference())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp", 
        0x561)

void*** rax_28 = j_sub_140a82f30(0x28)

if (rax_28 != 0)
    rdi = sub_140fd92c0(rax_28, var_110, r14)

*arg2 = rdi

if (rdi != 0)
    rdi[1].d += 1

int64_t* rcx_16 = var_110

if (rcx_16 != 0)
    int64_t rdx_7 = *rcx_16
    (*(rdx_7 + 0x10))(rcx_16, rdx_7)

__security_check_cookie(rax_1 ^ &var_158)
return arg2
