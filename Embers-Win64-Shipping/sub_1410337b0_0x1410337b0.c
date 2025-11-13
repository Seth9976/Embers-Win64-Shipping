// 函数: sub_1410337b0
// 地址: 0x1410337b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *(*arg1 + 0x20)
int64_t rax_1 = sub_141037da0(*(r15 + 0x4e8))
int32_t i = 0

if (arg1[6].d s> 0)
    int64_t* rdx_1 = nullptr
    
    do
        int32_t rax_2 = 0
        void* rbx_1 = *(rdx_1 + arg1[5])
        void* rcx_2 = *(rbx_1 + 8)
        
        if (0 == *(rcx_2 + 8))
            *(rcx_2 + 8) = 0
        else
            rax_2 = *(rcx_2 + 8)
        
        if (rax_2 == 1 && *(rbx_1 + 0x20) u<= rax_1)
            *(rbx_1 + 0x10) = 0
            *(rbx_1 + 0x20) = 0
            int32_t rdx_2 = arg1[6].d
            int32_t rax_6 = rdx_2 - i
            
            if (rax_6 != 1)
                int64_t r10_1 = arg1[5]
                memmove(r10_1 + (sx.q(i) << 3), r10_1 + (sx.q(i + 1) << 3), (rax_6 - 1) << 3)
                rdx_2 = arg1[6].d
            
            arg1[6].d = rdx_2 - 1
            sub_1405c53d0(&arg1[5])
            return rbx_1
        
        i += 1
        rdx_1 = &rdx_1[1]
    while (i s< arg1[6].d)

int32_t* rax_3 = j_sub_140a82f30(0x28)
int32_t* rbx_2 = rax_3

if (rax_3 == 0)
    rbx_2 = nullptr
else
    *rbx_2 = arg1[2].d
    *(rbx_2 + 8) = 0
    rbx_2[4] = 0
    *(rbx_2 + 0x18) = 0
    *(rbx_2 + 0x20) = 0

int32_t rcx_5 = *(arg1 + 0x14)
int32_t rbp

if (rcx_5 - 1 u<= 1 || (rcx_5 == 4 && arg1[3].d - 2 u<= 1))
    rbp = 0xac3
else
    rbp = 0x400

int64_t* rcx_6 = *(rbx_2 + 8)
*(rbx_2 + 8) = nullptr

if (rcx_6 != 0)
    rcx_6[1].d -= 1
    
    if (rcx_6[1].d == 1)
        (**rcx_6)(rcx_6, 1)

void** var_60 = &rbx_2[2]
uint64_t var_68 = zx.q(arg1[2].d)
int32_t rax_15 =
    sub_141048070(r15, arg1 + 0x14, arg1[1].d, rbp, var_68, var_60, Fast Allocator Page", 0)

if (rax_15 s< 0)
    void* const var_48 = nullptr
    var_60 = &var_48
    int64_t var_40_1 = 0
    var_68 = 0
    sub_14106a020(rax_15, 
        "Adapter->CreateBuffer(HeapProperties, GetGPUMask(), InitialState, PageSize, "
    "Page->FastAllocBuffer.GetInitReference(), TEXT("Fast Allocator Page"))", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Allocation.cpp", 0x59f, 
        nullptr)

*(*(rbx_2 + 8) + 0xfe) = 0
void* rax_17 = *(rbx_2 + 8)
int64_t* rcx_9 = *(rax_17 + 0x20)
int32_t rax_19 = (*(*rcx_9 + 0x40))(rcx_9, 0, 0, rax_17 + 0x110, var_68, var_60)

if (rax_19 s< 0)
    int64_t var_38 = 0
    int64_t* var_60_1 = &var_38
    int64_t var_30_1 = 0
    sub_14106a020(rax_19, "Resource->Map(0, ReadRange, &ResourceBaseAddress)", 
        "d:\build\++ue4\sync\engine\source\runtime\d3d12rhi\private\../Public/D3D12Resources.h", 
        0x96, nullptr)

*(rbx_2 + 0x18) = *(rax_17 + 0x110)
return rbx_2
