// 函数: sub_1410a6c20
// 地址: 0x1410a6c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e3a9b0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e3a9b0)
    
    if (data_143e3a9b0 == 0xffffffff)
        sub_140b58260(&data_143e3a9a8, u"AsyncSSAOFence", 1)
        _Init_thread_footer(&data_143e3a9b0)

int64_t* rcx = data_143f0f180
int64_t arg_20
(*(*rcx + 0x98))(rcx, &arg_20, &data_143e3a9a8)

if (arg1 != &arg_20)
    int64_t* rbx_1 = *arg1
    *arg1 = arg_20
    arg_20 = 0
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            char rax_5
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_5 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_5 != 0))
                (**rbx_1)(rbx_1, 1)
            else
                bool z_1
                
                if (0 == *(rbx_1 + 0xc))
                    *(rbx_1 + 0xc) = 1
                    z_1 = true
                else
                    *(rbx_1 + 0xc)
                    z_1 = false
                
                if (z_1)
                    int32_t rax_7 = sub_140a20af0()
                    uint64_t rdx_2 = zx.q(rax_7)
                    void* const rax_8
                    
                    if (rax_7 != 0)
                        rax_8 = *(&data_143cf0bf8 + (rdx_2 u>> 0xe << 3))
                            + (zx.q(rdx_2.d) & 0x3fff) * 0x18
                    else
                        rax_8 = nullptr
                    
                    *(rax_8 + 8) = rbx_1
                    sub_1405a42f0(&data_143f02390, rdx_2.d)

sub_1405d1550(&arg_20)
int32_t rcx_6 = *(data_143e2de68 + 4)
int32_t rbx_2

if (rcx_6 s>= 0)
    rbx_2 = 4
    
    if (rcx_6 s< 4)
        rbx_2 = rcx_6
else
    rbx_2 = 0

void*** rcx_9 = (data_143f02d90 + 7) & 0xfffffffffffffff8
void* rax_14 = &rcx_9[3]

if (rax_14 u> data_143f02d98)
    sub_140b0e3d0(&data_143f02d90, 0x20)
    rcx_9 = (data_143f02d90 + 7) & 0xfffffffffffffff8
    rax_14 = &rcx_9[3]

data_143f02d74 += 1
data_143f02d90 = rax_14
*data_143f02d68 = rcx_9
data_143f02d68 = &rcx_9[1]
rcx_9[1] = 0
rcx_9[2].d = rbx_2
*rcx_9 = &data_142f115f8
return &data_142f115f8
