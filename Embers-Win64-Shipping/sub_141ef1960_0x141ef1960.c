// 函数: sub_141ef1960
// 地址: 0x141ef1960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x89) &= 0xfe
int64_t rbx = *(arg1 + 0x18)
int64_t r14 = *(arg1 + 0x20)
char rdi = sub_140ce4310(arg1, arg2, arg3, arg4)
char rax

if (rbx != *(arg1 + 0x18) || r14 != *(arg1 + 0x20))
    rax = 1
else
    rax = 0

if ((*(arg1 + 0x89) & 1) == 0 && (arg4.b & 2) == 0 && rax != 0)
    int64_t var_18
    int64_t* rax_1 = sub_140d21830(arg1, &var_18, 0, 0)
    int16_t* const r9
    
    if (rax_1[1].d == 0)
        r9 = &data_142d40450
    else
        r9 = *rax_1
    
    sub_140af98a0("Unknown", 0x189, 
        %s failed to route PostRename.  Please call Super::PostRename() in your <className>::"
    "PostRename() function. ", r9)
    int64_t rcx_1 = var_18
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    sub_140afbb40()

return zx.q(rdi)
