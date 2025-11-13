// 函数: sub_141013a40
// 地址: 0x141013a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)
int64_t* arg_8 = nullptr
int32_t rax_1 = (*(*rcx + 0x70))(rcx, arg1 + 0xc, &data_142efce18, &arg_8)
int64_t var_28

if (rax_1 s< 0)
    var_28 = 0
    int64_t* var_30_1 = &var_28
    int64_t var_20_1 = 0
    sub_14106a020(rax_1, 
        "m_pDevice->CreateDescriptorHeap(&m_Desc, IID_PPV_ARGS(Heap.GetInitReference()))", 
        "d:\build\++ue4\sync\engine\source\runtime\d3d12rhi\private\D3D12DescriptorCache.h", 0x120, 
        nullptr)

int64_t* rcx_3 = arg_8
int64_t arg_10
(*(*rcx_3 + 0x48))(rcx_3, &arg_10)
int64_t rdi = sx.q(*(arg1 + 0x30))
int32_t rdx_4 = *(arg1 + 0x30) + 1

if (rdx_4 s> rdi.d)
    *(arg1 + 0x30) = rdx_4
    int32_t i_1 = rdx_4 - rdi.d
    
    if (rdx_4 s> *(arg1 + 0x34))
        sub_1405c4ec0(arg1 + 0x28)
    
    int64_t* rdx_6 = *(arg1 + 0x28) + rdi * 0x28
    
    if (i_1 != 0)
        void* rax_4 = &rdx_6[3]
        int32_t i
        
        do
            *rdx_6 = 0
            rdx_6 = &rdx_6[5]
            *(rax_4 - 0x10) = &data_142efcdf8
            *(rax_4 - 8) = 0
            *rax_4 = 0
            *(rax_4 + 8) = 0
            rax_4 += 0x28
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (rdx_4 s< rdi.d)
    sub_141033480(arg1 + 0x28, rdx_4, rdi.d - rdx_4, 1)

void* rdi_2 = *(arg1 + 0x28) + sx.q(*(arg1 + 0x30)) * 0x28
int64_t rax_7 = arg_10
int64_t rdx_9 = zx.q(*(arg1 + 0x1c) * *(arg1 + 0x10)) + rax_7
var_28 = rax_7
int64_t var_20_2 = rdx_9
int128_t* rax_8 = j_sub_140a82f30(0x20)

if (rax_8 != 0)
    int128_t zmm0_1 = var_28.o
    rax_8[1].q = 0
    *(rax_8 + 0x18) = 0
    *rax_8 = zmm0_1
    void* rax_9 = *(rdi_2 - 0x10)
    
    if (rax_9 == 0)
        *(rdi_2 - 0x18) = rax_8
    else
        *(rax_9 + 0x10) = rax_8
        *(rax_8 + 0x18) = *(rdi_2 - 0x10)
    
    *(rdi_2 - 0x10) = rax_8
    (*(*(rdi_2 - 0x20) + 8))(rdi_2 - 0x20, zx.q(*(rdi_2 - 8) + 1))

int64_t* rcx_10 = arg_8
int64_t* rbx_2 = *(rdi_2 - 0x28)
*(rdi_2 - 0x28) = rcx_10

if (rcx_10 != 0)
    (*(*rcx_10 + 8))()

if (rbx_2 != 0)
    (*(*rbx_2 + 0x10))(rbx_2)

int32_t rdi_3 = *(arg1 + 0x30)
int32_t* result = j_sub_140a82f30(0x18)

if (result != 0)
    *(result + 8) = 0
    *result = rdi_3 - 1
    *(result + 0x10) = 0
    void* rax_14 = *(arg1 + 0x48)
    
    if (rax_14 == 0)
        *(arg1 + 0x40) = result
    else
        *(rax_14 + 8) = result
        *(result + 0x10) = *(arg1 + 0x48)
    
    *(arg1 + 0x48) = result
    result = (*(*(arg1 + 0x38) + 8))(arg1 + 0x38, zx.q(*(arg1 + 0x50) + 1))

int64_t* rcx_14 = arg_8

if (rcx_14 == 0)
    return result

return (*(*rcx_14 + 0x10))(rcx_14)
