// 函数: sub_140cd9680
// 地址: 0x140cd9680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *arg1
uint64_t i_2 = zx.q(arg3)

if ((*(result + 0x40) & 0x1040000000) == 0)
    void** r8 = arg1[1]
    result.b = not.b(*(arg1 + 0x14))
    result.b &= 1
    void* rbx_1
    
    if (r8[1].d != 0)
        void* rcx = *r8
        
        if (result.b == 0 && (rcx.b & 1) != 0)
            rcx = (rcx s>> 1) + r8
        
        result = zx.q(arg1[2].d * arg2)
        rbx_1 = sx.q(result.d) + rcx
    else
        rbx_1 = nullptr
    
    if (i_2.d s> 0)
        uint64_t i_1 = i_2
        uint64_t i
        
        do
            int64_t* rcx_2 = *arg1
            
            if ((not.b((rcx_2[8] u>> 0x24).b) & 1) != 0)
                (*(*rcx_2 + 0xe8))(rcx_2, rbx_1)
            
            result = sx.q(arg1[2].d)
            rbx_1 += result
            i = i_1
            i_1 -= 1
        while (i != 1)

return result
