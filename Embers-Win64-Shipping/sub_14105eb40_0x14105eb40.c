// 函数: sub_14105eb40
// 地址: 0x14105eb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

AcquireSRWLockExclusive(arg1 + 0xc0)
int64_t rdi = 0
int64_t var_18 = 0
int64_t var_10 = 0

if (*(arg1 + 0x1f0) != 0)
    int64_t* rcx_1 = *(arg1 + 0x1e8)
    
    if (rcx_1 != 0)
        HANDLE rax_2 = (*(*rcx_1 + 0x58))(rcx_1)
        
        if (rax_2 != 0)
            var_10.d = rax_2.d
            
            if (rax_2.d s> 0)
                sub_1405daba0(&var_18)
                rdi = var_18
            
            int64_t* rcx_3 = *(arg1 + 0x1e8)
            int32_t rax_4 = (*(*rcx_3 + 0x60))(rcx_3, rdi, rax_2)
            
            if (rax_4 s< 0)
                var_18 = 0
                int64_t* var_20_1 = &var_18
                int64_t var_10_1 = 0
                sub_14106a020(rax_4, 
                    "PipelineLibrary->Serialize(LibraryData.GetData(), LibrarySize)", 
                    "D:"
                "/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/Windows/WindowsD3D12PipelineState."
                "cpp", 
                    0x1fb, nullptr)
            
            *(arg1 + 0x1c0) = 0xc
            sub_14105e750(arg1 + 0x188, rdi, rax_2)

int32_t rax_6 = *(arg1 + 0x1c0) - 0xc
*(arg1 + 0x1d0) = 0
*(arg1 + 0x1d4) = rax_6

if (*(arg1 + 0x1c9) == 0)
    if (*(arg1 + 0x1b0) != 0)
        int64_t* rcx_6 = *(arg1 + 0x198)
        *rcx_6 = *(arg1 + 0x1cc)
        rcx_6[1].d = *(arg1 + 0x1d4)
        FlushViewOfFile(*(arg1 + 0x1b0), *(arg1 + 0x1c0))
        UnmapViewOfFile(*(arg1 + 0x1b0))
    
    HANDLE hObject = *(arg1 + 0x1a8)
    
    if (hObject != 0)
        CloseHandle(hObject)
    
    HANDLE hObject_1 = *(arg1 + 0x1a0)
    
    if (hObject_1 != 0)
        CloseHandle(hObject_1)

sub_141017370(arg1)
int64_t* rcx_10 = *(arg1 + 0x1e8)
*(arg1 + 0x1e8) = 0

if (rcx_10 != 0)
    (*(*rcx_10 + 0x10))(rcx_10)

if (rdi != 0)
    sub_140a74f90(rdi)

return ReleaseSRWLockExclusive(arg1 + 0xc0) __tailcall
