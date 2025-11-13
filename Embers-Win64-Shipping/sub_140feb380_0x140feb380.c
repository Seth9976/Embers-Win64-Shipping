// 函数: sub_140feb380
// 地址: 0x140feb380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
uint64_t rsi = zx.q(*(arg1 + 0x4c))
int32_t var_58 = *(arg1 + 0x28)
int64_t var_48 = 0
int64_t rax_3 = 8 * rsi
int32_t var_54 = 0
int64_t var_50 = 4

if (mulu.dp.q(8, rsi) u>> 0x40 != zx.o(0))
    rax_3 = -1

int64_t rax_4 = rax_3 + 8

if (rax_3 u>= -8)
    rax_4 = -1

uint64_t* rax_5 = j_sub_140a82f30(rax_4)
void* rdx

if (rax_5 == 0)
    rdx = nullptr
else
    *rax_5 = rsi
    rdx = &rax_5[1]
    
    if (rsi != 0)
        __builtin_memset(rdx, 0, zx.q(rsi.d) << 3)

int32_t i = 0
*(arg1 + 0x40) = rdx
*(arg1 + 0x48) = 0

if (*(arg1 + 0x4c) u> 0)
    do
        int64_t* r15_1 = *(*(arg1 + 0x20) + 0x168)
        uint64_t r14_1 = zx.q(i) << 3
        int64_t* rdi_3 = *(arg1 + 0x40) + r14_1
        int64_t* rcx_2 = *rdi_3
        *rdi_3 = 0
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x10))(rcx_2)
        
        int64_t var_68
        int32_t rax_10 = (*(*r15_1 + 0x18))(r15_1, &var_58, 0, rdi_3, var_68)
        
        if (rax_10 s< 0)
            var_68 = *(*(arg1 + 0x20) + 0x168)
            sub_140fff020(rax_10, 
                "D3DRHI->GetDevice()->CreateBuffer(&BufferDesc, NULL, Buffers[s].GetInitReference())", 
                "D:"
            "/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/Windows/WindowsD3D11ConstantBuffer."
            "cpp", 0x1d)
        
        int64_t* rdi_5 = *(r14_1 + *(arg1 + 0x40))
        
        if (rdi_5 != 0)
            (*(*rdi_5 + 8))(rdi_5)
        
        void var_40
        (*(*rdi_5 + 0x50))(rdi_5, &var_40)
        
        if (rdi_5 != 0)
            (*(*rdi_5 + 0x10))(rdi_5)
        
        i += 1
        var_58 = ((var_58 u>> 1) + 0xf) & 0xfffffff0
    while (i u< *(arg1 + 0x4c))

int64_t rax_18 = sub_140a82f30(zx.q(*(arg1 + 0x28)), 0x10)
uint64_t count = zx.q(*(arg1 + 0x28))
*(arg1 + 0x30) = rax_18
int64_t result = memset(rax_18, 0, count)
__security_check_cookie(rax_1 ^ &var_88)
return result
