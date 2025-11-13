// 函数: sub_142649710
// 地址: 0x142649710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
void* rdx = rbx[0x23]

if (rdx == 0)
    (*(*rbx + 0x390))(rbx, rdx)
    rdx = rbx[0x23]

sub_142645910(arg1 + 0x78, rdx + 0x78)
int32_t result = *(arg1 + 0x80)

if (result == 0)
    TEB* gsbase
    
    if (data_143f71658
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f71658)
        
        if (data_143f71658 == 0xffffffff)
            sub_141dde490(&data_143f715e0, 0x420c0000, 0x43100000)
            atexit(sub_142d12210)
            _Init_thread_footer(&data_143f71658)
    
    int64_t rbx_1 = sx.q(*(arg1 + 0x80))
    int32_t rax_4 = (rbx_1 + 1).d
    *(arg1 + 0x80) = rax_4
    
    if (rax_4 s> *(arg1 + 0x84))
        sub_1407c3920(arg1 + 0x78)
    
    sub_141dde3b0(rbx_1 * 0x78 + *(arg1 + 0x78), &data_143f715e0)
    result = *(arg1 + 0x80)

int32_t i = 0

if (result s> 0)
    do
        bool rcx_6 = false
        
        if (i u<= 0xf)
            result = *(arg1 + 0x88)
            rcx_6 = test_bit(result, i)
        
        if (rcx_6 == 0)
            result = sub_141ded060(sx.q(i) * 0x78 + *(arg1 + 0x78))
        
        i += 1
    while (i s< *(arg1 + 0x80))

return result
