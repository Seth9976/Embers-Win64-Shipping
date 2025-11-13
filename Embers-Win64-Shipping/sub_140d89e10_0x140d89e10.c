// 函数: sub_140d89e10
// 地址: 0x140d89e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg2
char rax_1 = (*(*rcx + 0x50))(rcx)
void* rax_3

if (data_1439ae4a8 == data_1439ae4d4)
label_140d89eaa:
    rax_3 = nullptr
else
    void* r8_1 = data_1439ae4e0
    void* rcx_2 = &data_1439ae4d8
    
    if (r8_1 != 0)
        rcx_2 = r8_1
    
    int32_t rax_2 = *(rcx_2 + (((sx.q(data_1439ae4e8) - 1) & zx.q(rax_1)) << 2))
    
    if (rax_2 == 0xffffffff)
    label_140d89eaa_1:
        rax_3 = nullptr
    else
        int64_t r8_2 = data_1439ae4a0
        int64_t rdx_1
        
        while (true)
            rdx_1 = sx.q(rax_2) * 0x28
            
            if (*(rdx_1 + r8_2) == rax_1)
                break
            
            rax_2 = *(rdx_1 + r8_2 + 0x20)
            
            if (rax_2 == 0xffffffff)
                goto label_140d89eaa_2
        
        rax_3 = rdx_1 + r8_2
        
        if (rax_2 == 0xffffffff)
        label_140d89eaa_2:
            rax_3 = nullptr

void* rcx_4 = rax_3 + 8

if (rax_3 == 0)
    rcx_4 = nullptr

if (rcx_4 == 0)
    TEB* gsbase
    
    if (data_143e20728
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143e20728)
        
        if (data_143e20728 == 0xffffffff)
            _vfprintf_p_l(&data_143e20710, u"custom", u"SlateAccessibility")
            atexit(sub_142cc98c0)
            _Init_thread_footer(&data_143e20728)
    
    rcx_4 = &data_143e20710

sub_140596d10(arg1, sub_140ac6680(rcx_4))
int64_t* rdi_1 = arg2[1]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp1_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

return arg1
