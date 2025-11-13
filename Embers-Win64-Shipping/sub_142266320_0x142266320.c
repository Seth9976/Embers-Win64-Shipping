// 函数: sub_142266320
// 地址: 0x142266320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x298)
int64_t result

if (rbx != 0)
    void* rax = sub_142531230()
    void* r9_1 = *(rbx + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s<= *(r9_1 + 0x38) && *(*(r9_1 + 0x30) + (result << 3)) == rax + 0x30)
        int64_t* rcx_1 = *(rbx + 0x70)
        void arg_8
        
        if (rcx_1 != 0 && (*(*rcx_1 + 0x2d8))(rcx_1, &arg_8).b != 0)
            return sub_142022d00(arg1, &arg_8, arg2, arg3)

result.b = 0
return result
