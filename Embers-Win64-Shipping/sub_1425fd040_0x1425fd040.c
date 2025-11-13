// 函数: sub_1425fd040
// 地址: 0x1425fd040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1[3]
*arg1 = &data_14344cc10

if (rsi != 0)
    EnterCriticalSection(rsi + 0x60)
    sub_1409740e0(rsi + 0x10, arg1)
    
    if (rsi != -0x60)
        LeaveCriticalSection(rsi + 0x60)
    
    void*** rbx_2 = arg1[3]
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1 && rbx_2 != 0)
        int64_t* rcx_3 = rbx_2[0x11]
        *rbx_2 = &data_142e32fb8
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x38))(rcx_3, rbx_2)
            int64_t* rcx_4 = rbx_2[0x11]
            
            if (rcx_4 != 0)
                (*(*rcx_4 + 0x10))(rcx_4)
                rbx_2[0x11] = 0
        
        if (rbx_2[0x12].b != 0)
            CoUninitialize()
        
        DeleteCriticalSection(&rbx_2[0xc])
        rbx_2[0xb].d = 0
        int64_t rcx_6 = rbx_2[0xa]
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        rbx_2[3].d = 0
        
        if (*(rbx_2 + 0x1c) != 0)
            sub_1405a5410(&rbx_2[2], 0)
        
        rbx_2[8].d = 0xffffffff
        *(rbx_2 + 0x44) = 0
        sub_14059a8e0(&rbx_2[4], 0)
        int64_t rcx_9 = rbx_2[6]
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        int64_t rcx_10 = rbx_2[2]
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        j_sub_140a74f90(rbx_2)
    
    arg1[3] = 0

int64_t* rcx_12 = arg1[2]

if (rcx_12 != 0)
    (*(*rcx_12 + 0x90))(rcx_12)
    arg1[2] = 0

int64_t* rcx_13 = arg1[1]

if (rcx_13 != 0)
    (*(*rcx_13 + 0x10))(rcx_13)
    arg1[1] = 0

HMODULE hLibModule = data_143f71220

if (hLibModule != 0 && data_143de5432 != 0)
    FreeLibrary(hLibModule)
    data_143f71220 = 0

arg1[0x34] = &data_14344cb48
return &data_14344cb48
