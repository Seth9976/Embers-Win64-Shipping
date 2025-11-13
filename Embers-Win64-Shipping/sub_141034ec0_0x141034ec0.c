// 函数: sub_141034ec0
// 地址: 0x141034ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 + 0x98 != arg1 + 0x28)
    void* rcx = *(arg1 + 0xa0)
    
    if (rcx != 0)
        int32_t rax_1 = *(rcx + 0x14)
        *(rcx + 0x14) -= 1
        
        if (rax_1 == 1)
            int64_t* rcx_1 = *(arg1 + 0xa0)
            
            if (rcx_1 != 0)
                sub_141011360(rcx_1, rax_1.b)
    
    *(arg1 + 0xa0) = 0
    void* rax_2 = *(arg1 + 0x30)
    
    if (rax_2 != 0)
        *(arg1 + 0xa0) = rax_2
        *(rax_2 + 0x14) += 1

void* rax_3 = *(arg1 + 0x30)
int64_t rcx_2

if (rax_3 == 0)
    rcx_2 = 0
else
    rcx_2 = *(rax_3 + 0x60)

*(arg1 + 0xa8) = rcx_2
int64_t* rax_4 = j_sub_140a82f30(0x28)

if (rax_4 != 0)
    *rax_4 = 0
    int64_t* rcx_3 = *(arg1 + 0x90)
    rax_4[1] = rcx_3
    
    if (rcx_3 != 0)
        int64_t rdx_2 = *rcx_3
        (*(rdx_2 + 8))(rcx_3, rdx_2)
    
    void* rax_5 = *(arg1 + 0xa0)
    rax_4[2] = &data_142efcd90
    rax_4[3] = rax_5
    
    if (rax_5 != 0)
        *(rax_5 + 0x14) += 1
    
    rax_4[2] = &data_142efcd90
    rax_4[4] = *(arg1 + 0xa8)
    int64_t** rax_7 = *(arg1 + 0xb0)
    *(arg1 + 0xb0) = rax_4
    *rax_7 = rax_4

char rax_12
uint64_t rcx_8

if (**(arg1 + 0xb8) != 0)
    void* rdi_2 = **(arg1 + 0xb8)
    int64_t* rsi_1 = *(arg1 + 0x90)
    int64_t* rcx_5 = *(rdi_2 + 8)
    *(arg1 + 0x90) = rcx_5
    
    if (rcx_5 != 0)
        (*(*rcx_5 + 8))()
    
    if (rsi_1 != 0)
        (*(*rsi_1 + 0x10))(rsi_1)
    
    sub_141010280(arg1 + 0x98, rdi_2 + 0x10)
    rcx_8 = *(arg1 + 0xa0)
    
    if (rcx_8 != 0)
        rax_12 = sub_1410270d0(rcx_8, *(arg1 + 0xa8))

int64_t* rcx_25
int64_t* rsi_3
void* rdi_5

if (**(arg1 + 0xb8) == 0 || (rcx_8 != 0 && rax_12 == 0))
    rdi_5 = arg1 + 0x58
    int64_t* rsi_4 = *(*(*(arg1 + 8) + 0x20) + 0x18)
    int64_t* rcx_21 = *rdi_5
    *rdi_5 = 0
    
    if (rcx_21 != 0)
        (*(*rcx_21 + 0x10))(rcx_21)
    
    int32_t rax_24 = (*(*rsi_4 + 0x70))(rsi_4, arg1 + 0x60, &data_142efce18, rdi_5)
    
    if (rax_24 s< 0)
        int64_t var_68 = 0
        int64_t* var_70_1 = &var_68
        int64_t var_60_1 = 0
        sub_14106a020(rax_24, 
            "GetParentDevice()->GetDevice()->CreateDescriptorHeap(&Desc, IID_PPV_ARGS(Heap."
        "GetInitReference()))", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12DescriptorCache.cpp", 
            0x349, nullptr)
    
    *rdi_5
    *(arg1 + 0x60)
    rcx_25 = *rdi_5
    rsi_3 = *(arg1 + 0x90)
    *(arg1 + 0x90) = rcx_25
else
    void* rsi_2 = **(arg1 + 0xb8)
    
    if (rsi_2 != 0)
        int64_t* rcx_9 = *(rsi_2 + 8)
        int64_t* rdi_3 = *(arg1 + 0x90)
        *(arg1 + 0x90) = rcx_9
        
        if (rcx_9 != 0)
            (*(*rcx_9 + 8))()
        
        if (rdi_3 != 0)
            (*(*rdi_3 + 0x10))(rdi_3)
        
        sub_141010280(arg1 + 0x98, rsi_2 + 0x10)
        void* rdi_4 = *(arg1 + 0xb8)
        int512_t zmm0_1
        zmm0_1.o = zx.o(0)
        *(arg1 + 0xb8) = rsi_2
        int64_t* rcx_12 = *(rsi_2 + 8)
        int64_t* var_58_1 = nullptr
        void** const var_50 = &data_142efcd90
        *(rsi_2 + 8) = 0
        int64_t var_48_1 = (zx.o(0)).q
        
        if (rcx_12 != 0)
            (*(*rcx_12 + 0x10))(zmm0_1)
        
        sub_141010280(rsi_2 + 0x10, &var_50)
        
        if (var_48_1 != 0)
            int32_t rax_17 = *(var_48_1 + 0x14)
            *(var_48_1 + 0x14) -= 1
            
            if (rax_17 == 1)
                sub_141011360(var_48_1, rax_17.b)
        
        if (var_58_1 != 0)
            (*(*var_58_1 + 0x10))(var_58_1)
        
        if (rdi_4 != 0)
            void* rax_19 = *(rdi_4 + 0x18)
            *(rdi_4 + 0x10) = &data_142efcd90
            
            if (rax_19 != 0)
                int32_t rbp_1 = *(rax_19 + 0x14)
                *(rax_19 + 0x14) -= 1
                
                if (rbp_1 == 1)
                    int64_t* rcx_17 = *(rdi_4 + 0x18)
                    
                    if (rcx_17 != 0)
                        sub_141011360(rcx_17, rbp_1.b)
            
            int64_t* rcx_18 = *(rdi_4 + 8)
            
            if (rcx_18 != 0)
                (*(*rcx_18 + 0x10))(rcx_18)
            
            j_sub_140a74f90(rdi_4)
    
    rcx_25 = *(arg1 + 0x90)
    rdi_5 = arg1 + 0x58
    rsi_3 = *rdi_5
    *rdi_5 = rcx_25

if (rcx_25 != 0)
    (*(*rcx_25 + 8))(rcx_25)

if (rsi_3 != 0)
    (*(*rsi_3 + 0x10))(rsi_3)

int64_t* rcx_27 = *rdi_5
*(arg1 + 0x50) = 0
void arg_10
*(arg1 + 0x40) = *(*(*rcx_27 + 0x48))(rcx_27, &arg_10)
int64_t* rcx_29 = *rdi_5
void arg_18
*(arg1 + 0x48) = *(*(*rcx_29 + 0x50))(rcx_29, &arg_18)
return sub_141035290(*(arg1 + 0x20)) __tailcall
