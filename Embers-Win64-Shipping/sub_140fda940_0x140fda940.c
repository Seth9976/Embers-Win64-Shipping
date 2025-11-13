// 函数: sub_140fda940
// 地址: 0x140fda940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ef5ad8
int64_t* rcx = arg1[3]
(*(*rcx + 0x720))(rcx)
int64_t* rcx_1 = arg1[0xe]

if (rcx_1 != 0)
    int32_t rax_2 = (*(*rcx_1 + 0x50))(rcx_1, 0, 0)
    
    if (rax_2 s< 0)
        int64_t var_38_1 = arg1[3][0x2d]
        sub_140fff020(rax_2, "SwapChain->SetFullscreenState(false, NULL)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Viewport.cpp", 
            0xd4)

void* rbx = &arg1[0x12]
(*(*rbx + 0x30))(rbx)
void* r13 = arg1[3]
int64_t rcx_5 = sx.q(*(r13 + 0x2688))

if (rcx_5.d != 0)
    int32_t rdi_1 = 0
    int32_t r12_1 = 0
    int64_t r15
    r15.b = **(r13 + 0x2680) != arg1
    int64_t rbx_1 = 0
    
    do
        int64_t r9_1 = sx.q(rdi_1)
        rbx_1 += 1
        rdi_1 += 1
        
        if (rbx_1 s< rcx_5)
            int64_t* rcx_6 = *(r13 + 0x2680) + (rbx_1 << 3)
            
            do
                int32_t rax_6
                rax_6.b = *rcx_6 != arg1
                
                if (zx.d(r15.b) != rax_6)
                    break
                
                rdi_1 += 1
                rbx_1 += 1
                rcx_6 = &rcx_6[1]
            while (rbx_1 s< rcx_5)
        
        int32_t r14_2 = rdi_1 - r9_1.d
        
        if (r15.b != 0)
            if (r12_1 != r9_1.d)
                int64_t rcx_7 = *(r13 + 0x2680)
                memmove(rcx_7 + (sx.q(r12_1) << 3), rcx_7 + (r9_1 << 3), r14_2 << 3)
            
            r12_1 += r14_2
        
        r15.b ^= 1
    while (rbx_1 s< rcx_5)
    
    rbx = &arg1[0x12]
    *(r13 + 0x2688) = r12_1

sub_14081c9d0(&arg1[0x16])
int64_t* rcx_10 = *(rbx + 0x18)

if (rcx_10 != 0)
    (*(*rcx_10 + 0x10))(rcx_10)

sub_1419948a0(rbx)
int64_t* rcx_12 = arg1[0x10]

if (rcx_12 != 0)
    (*(*rcx_12 + 0x10))(rcx_12)

void* rcx_13 = arg1[0xf]

if (rcx_13 != 0)
    (*(*(rcx_13 + 0x68) + 0x10))(rcx_13 + 0x68)

int64_t* rcx_15 = arg1[0xe]

if (rcx_15 != 0)
    (*(*rcx_15 + 0x10))(rcx_15)

*arg1 = &data_142d3ff08
return &data_142d3ff08
