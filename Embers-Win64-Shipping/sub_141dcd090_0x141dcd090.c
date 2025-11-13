// 函数: sub_141dcd090
// 地址: 0x141dcd090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (*(arg1 + 0x20) != 0)
    result = sub_1425492f0()
    
    if (result != 0)
        void* rdx_1 = *(arg1 + 0x20)
        int64_t r8_1 = result + 0x30
        result = sx.q(*(result + 0x38))
        
        if (result.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (result << 3)) == r8_1
                && rdx_1 != 0)
            void* rax = sub_1425492f0()
            int64_t rax_1
            int64_t* rbx_1
            
            if (rax != 0)
                rbx_1 = *(arg1 + 0x20)
                rax_1 = sx.q(*(rax + 0x38))
            
            if (rax == 0 || rax_1.d s> rbx_1[7].d || *(rbx_1[6] + (rax_1 << 3)) != rax + 0x30)
                rbx_1 = nullptr
            
            int64_t* rcx_3 = rbx_1[0x23]
            
            if (rcx_3 == 0)
                (*(*rbx_1 + 0x390))(rbx_1)
                rcx_3 = rbx_1[0x23]
            
            if ((*(*rcx_3 + 0x268))(rcx_3).b != 0)
                result.b = 1
                return result

result.b = 0
return result
