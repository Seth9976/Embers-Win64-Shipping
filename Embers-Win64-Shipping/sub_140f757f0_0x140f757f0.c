// 函数: sub_140f757f0
// 地址: 0x140f757f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x398)
int64_t* rcx = nullptr

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rcx = *(arg1 + 0x390)

char rax_3 = (*(*rcx + 0x18))(rcx)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t rdx_1 = *rbx
        (*rdx_1)(rbx, rdx_1)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

char rax_6 = (*(**(arg1 + 0x3a0) + 0x1c8))()
uint64_t rcx_4 = zx.q(data_14401b1a0)
TEB* gsbase

if (rax_3 == 0)
    int32_t rax_10 = *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx_4 << 3)))
    
    if (rax_6 == 0)
        if (data_143e2b168 s> rax_10)
            _Init_thread_header(&data_143e2b168)
            
            if (data_143e2b168 == 0xffffffff)
                sub_140b58170(&data_143e2b160, "TreeArrow_Collapsed", 1)
                _Init_thread_footer(&data_143e2b168)
        
        data_143e2b160
    else
        if (data_143e2b158 s> rax_10)
            _Init_thread_header(&data_143e2b158)
            
            if (data_143e2b158 == 0xffffffff)
                sub_140b58170(&data_143e2b150, "TreeArrow_Collapsed_Hovered", 1)
                _Init_thread_footer(&data_143e2b158)
        
        data_143e2b150
else
    int32_t rax_8 = *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx_4 << 3)))
    
    if (rax_6 == 0)
        if (data_143e2b148 s> rax_8)
            _Init_thread_header(&data_143e2b148)
            
            if (data_143e2b148 == 0xffffffff)
                sub_140b58170(&data_143e2b140, "TreeArrow_Expanded", 1)
                _Init_thread_footer(&data_143e2b148)
        
        data_143e2b140
    else
        if (data_143e2b138 s> rax_8)
            _Init_thread_header(&data_143e2b138)
            
            if (data_143e2b138 == 0xffffffff)
                sub_140b58170(&data_143e2b130, "TreeArrow_Expanded_Hovered", 1)
                _Init_thread_footer(&data_143e2b138)
        
        data_143e2b130
jump(*(**(arg1 + 0x3b0) + 0x48))
