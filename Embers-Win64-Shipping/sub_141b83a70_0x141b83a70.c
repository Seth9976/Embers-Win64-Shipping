// 函数: sub_141b83a70
// 地址: 0x141b83a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = arg1[0x74]
*arg1 = &data_143072d38
arg1[0x72] = &data_143072f98
arg1[0x75] = &data_143072fb8
int64_t arg_8
sub_140d3a3a0(&arg_8, rdx)
sub_141bdaed0(&data_1439ec470, arg_8)
int64_t* rcx_1 = arg1[0x7c]

if (rcx_1 != 0)
    int32_t temp0_1 = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_1 + 8))(rcx_1, 1)

sub_140745b20(&arg1[0x78])
sub_140745b20(&arg1[0x76])
return Concurrency::details::UMSFreeVirtualProcessorRoot::~UMSFreeVirtualProcessorRoot(arg1)
    __tailcall
