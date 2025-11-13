// 函数: sub_14101c810
// 地址: 0x14101c810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x90)
uint64_t result = zx.q(rax - 1)
int64_t rdi = sx.q(result.d)

if (rax - 1 s>= 0)
    int64_t temp2_1
    
    do
        sub_14101c400(*(*(arg1 + 0x88) + (rdi << 3)))
        result = *(arg1 + 0x88)
        void* rbx_1 = *(result + (rdi << 3))
        
        if (rbx_1 != 0)
            sub_14100df10(rbx_1 + 0xa8)
            int64_t rcx_3 = *(rbx_1 + 0x98)
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            int64_t* rcx_4 = *(rbx_1 + 0x90)
            
            if (rcx_4 != 0)
                rcx_4[1].d -= 1
                
                if (rcx_4[1].d == 1 && rcx_4 != 0)
                    (**rcx_4)(rcx_4, 1)
            
            int64_t* rcx_5 = *(rbx_1 + 0x88)
            
            if (rcx_5 != 0)
                rcx_5[1].d -= 1
                
                if (rcx_5[1].d == 1 && rcx_5 != 0)
                    (**rcx_5)(rcx_5, 1)
            
            DeleteCriticalSection(rbx_1 + 0x30)
            int64_t rcx_7 = *(rbx_1 + 0x18)
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            result = j_sub_140a74f90(rbx_1)
        
        temp2_1 = rdi
        rdi -= 1
    while (temp2_1 - 1 s>= 0)

bool cond:1 = *(arg1 + 0x94) == 0
*(arg1 + 0x90) = 0

if (cond:1)
    return result

return sub_1405c5570(arg1 + 0x88, 0) __tailcall
