// 函数: sub_140f251d0
// 地址: 0x140f251d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[0xb4].d == 0xffffffff
*arg1 = &data_142ee63e0

if (not(cond:0))
    arg2 = &arg1[0xb4]
    sub_140db35c0(sub_140da2c00(), arg2)

sub_140d952d0(&arg1[0xa8], arg2)
sub_140d952d0(&arg1[0x96])
sub_140d952d0(&arg1[0x88])
int64_t* rdi = arg1[0x86]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

sub_140745b20(&arg1[0x81])
sub_140745b20(&arg1[0x7e])
sub_140745b20(&arg1[0x7b])
sub_140745b20(&arg1[0x78])
int64_t* rdi_1 = arg1[0x75]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rsi_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, zx.q(rsi_1))

int64_t* rcx_12 = arg1[0x73]

if (rcx_12 != 0)
    int32_t temp3_1 = *(rcx_12 + 0xc)
    *(rcx_12 + 0xc) -= 1
    
    if (temp3_1 == 1)
        (*(*rcx_12 + 8))(rcx_12, 1)

return sub_1406922a0(arg1) __tailcall
