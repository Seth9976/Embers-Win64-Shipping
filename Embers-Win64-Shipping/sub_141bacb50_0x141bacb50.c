// 函数: sub_141bacb50
// 地址: 0x141bacb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x48)

if (rbx != 0)
    void* rax_1 = sub_142542e20()
    void* rcx = rbx[2]
    int64_t rdx_1 = sx.q(*(rax_1 + 0x38))
    
    if (rdx_1.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rdx_1 << 3)) == rax_1 + 0x30)
        return rbx
    
    void* rax_3 = sub_142543940()
    void* rdx_2 = rbx[2]
    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
    
    if (rax_4.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
        void* rax_6 = sub_142121cc0(rbx, nullptr)
        sub_140e24dd0(arg1, rax_6)
        return rax_6

return 0
