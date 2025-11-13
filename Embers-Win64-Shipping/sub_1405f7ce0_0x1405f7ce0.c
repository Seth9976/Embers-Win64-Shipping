// 函数: sub_1405f7ce0
// 地址: 0x1405f7ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = -2
int64_t r12 = sx.q(arg2)

if (arg3 == 0)
    return 0x80004003

void* arg_20 = arg1 + 0x18
EnterCriticalSection(arg1 + 0x18)
HRESULT rbp_1

if (*(arg1 + 0x40) != 0)
    int64_t* rax_2 = sub_1405f8df0(arg1 + 0x64)
    rbp_1 = 0
    int64_t* r15_1 = nullptr
    uint64_t var_48 = 0
    int32_t i_2 = rax_2[1].d
    int64_t* rbx_1 = *rax_2
    int32_t i_3 = i_2
    
    if (i_2 != 0)
        sub_1405c4a00(&var_48, i_2, 0)
        r15_1 = var_48
        void* r14_2 = r15_1 - rbx_1
        int32_t i
        
        do
            int64_t* rcx_3 = *rbx_1
            *(r14_2 + rbx_1) = rcx_3
            
            if (rcx_3 != 0)
                (*(*rcx_3 + 8))()
            
            rbx_1 = &rbx_1[1]
            i = i_2
            i_2 -= 1
        while (i != 1)
        i_2 = i_3
    else
        int32_t var_3c_1 = 0
    
    if (r12.d s< 0 || r12.d s>= i_2)
        rbp_1 = 0xc00d36b9
    else
        int64_t* rbx_2 = r15_1[r12]
        int64_t* var_50_1 = rbx_2
        
        if (rbx_2 != 0)
            (*(*rbx_2 + 8))(rbx_2)
        
        if (rbx_2 != 0)
            struct IMFMediaType ppMFType = 0
            HRESULT rax_5 = MFCreateMediaType(&ppMFType)
            
            if (rax_5 s< 0)
                rbp_1 = rax_5
            else
                rax_5 = (*(*rbx_2 + 0x100))(rbx_2, ppMFType)
                
                if (rax_5 s< 0)
                    rbp_1 = rax_5
                else
                    struct IMFMediaType ppMFType_1 = ppMFType
                    arg3->vtable = ppMFType_1
                    (*(*ppMFType_1 + 8))()
            
            struct IMFMediaType ppMFType_2 = ppMFType
            
            if (ppMFType_2 != 0)
                (*(*ppMFType_2 + 0x10))(ppMFType_2)
        else
            rbp_1 = 0xc00d36b4
        
        if (rbx_2 != 0)
            (*(*rbx_2 + 0x10))(rbx_2)
    
    int64_t* rbx_3 = r15_1
    
    if (i_2 != 0)
        int32_t i_1
        
        do
            int64_t* rcx_8 = *rbx_3
            
            if (rcx_8 != 0)
                (*(*rcx_8 + 0x10))(rcx_8)
            
            rbx_3 = &rbx_3[1]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    if (r15_1 != 0)
        sub_140a74f90(r15_1)
else
    rbp_1 = 0xc00d3e85

if (arg1 != -0x18)
    LeaveCriticalSection(arg1 + 0x18)

return zx.q(rbp_1)
