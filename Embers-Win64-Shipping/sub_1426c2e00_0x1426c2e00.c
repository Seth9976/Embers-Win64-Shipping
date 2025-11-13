// 函数: sub_1426c2e00
// 地址: 0x1426c2e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    int64_t rax
    rax.b = 0
    return rax

int64_t rax_1 = sub_14272e4a0()
int64_t r8 = *arg1
void* rax_2 = (*(r8 + 0x610))(arg1, rax_1, r8)
arg1[0x5f] = rax_2

if (rax_2 != 0)
    int64_t rax_7 = *(rax_2 + 0xc0)
    
    if (rax_7 == 0 || rax_7 != arg2)
        (*(*arg1 + 0x7b8))(arg1, rax_2, arg2)
else
    void arg_10
    uint64_t rbx_1 = *sub_140b58260(&arg_10, u"BlackboardComponent", (rax_2 + 1).d)
    uint32_t rcx_4
    rcx_4.b = (rbx_1 u>> 0x20).d == 0
    
    if ((rcx_4.b & sub_140b5b8a0(rbx_1.d, 0)) != 0)
        sub_140d19010(arg1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    void* rax_6 = sub_140d2dfc0(sub_14272e4a0(), arg1, rbx_1, 0, 0, 0, 0, 0, 0)
    arg1[0x5f] = rax_6
    
    if (rax_6 != 0)
        int64_t r9_1 = *arg1
        (*(r9_1 + 0x7b8))(arg1, rax_6, arg2, r9_1)
        sub_141ef1390(arg1[0x5f])

*arg3 = arg1[0x5f]
int64_t rax_9
rax_9.b = 1
return rax_9
