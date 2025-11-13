// 函数: sub_14281b810
// 地址: 0x14281b810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t rdi_1 = arg2
char rbx_1 = 0
class std::wostream* rax

if (sub_14281e6ec(*arg1) != 0 && arg1[7] u> 0)
    rax, arg2 = sub_14281aa4c(arg1)

if (rdi_1 s<= 0)
    return 

if (rdi_1 s<= 3)
label_14281b894:
    void* rax_1 = *arg1
    
    if (*(rax_1 + 0xd0) != 0 || *(rax_1 + 0xd2) != 0)
        rbx_1 = 1
    
    arg2.b = rbx_1
    sub_14281ba8c(arg1, arg2.b, 0)
else if (rdi_1 == 4)
label_14281b861:
    rax = *arg1
    
    if (rax->__offset(0xd0).b != 0 || rax->__offset(0xd2).b != 0 || rax->__offset(0xd3).b != 0)
        sub_14281f460(&arg1[1], &data_14370209c, 1)
else
    if (rdi_1 == 5)
        goto label_14281b894
    
    if (rdi_1 == 6)
        goto label_14281b861
