// 函数: sub_142702060
// 地址: 0x142702060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2
int64_t rax_10
char rdx_2

if (arg2 == 0)
label_142702109:
    TEB* gsbase
    
    if (data_143f724c4
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f724c4)
        
        if (data_143f724c4 == 0xffffffff)
            data_143f724b8 = 0xff
            sub_140b58260(&data_143f724bc, u"Invalid", 1)
            _Init_thread_footer(&data_143f724c4)
    
    rdx_2 = data_143f724b8
    rax_10 = data_143f724bc
else
    void* rax_1 = sub_14272a610()
    
    if (rax_1 == 0)
        goto label_142702109
    
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> rbx[7].d || *(rbx[6] + (rax_2 << 3)) != rax_1 + 0x30)
        goto label_142702109
    
    void* rax_4 = sub_14272a610()
    int64_t rax_5
    
    if (rax_4 != 0)
        rax_5 = sx.q(*(rax_4 + 0x38))
    
    if (rax_4 == 0 || rax_5.d s> rbx[7].d || *(rbx[6] + (rax_5 << 3)) != rax_4 + 0x30)
        rbx = nullptr
    
    void* rcx_3 = rbx[0x23]
    
    if (rcx_3 == 0)
        (*(*rbx + 0x390))(rbx)
        rcx_3 = rbx[0x23]
    
    rax_10 = *(rcx_3 + 0x48)
    rdx_2 = *(rcx_3 + 0x44)

*(arg1 + 4) = rax_10
*arg1 = rdx_2
return arg1
