// 函数: sub_1410161a0
// 地址: 0x1410161a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection_1 = arg1 + 0x30
void* rbx = arg1
EnterCriticalSection(lpCriticalSection_1)
int32_t i_1 = 0
int64_t* r12 = rbx + 0x88
void** r14 = *r12
int64_t r15 = 0
void** arg_18 = r14
int64_t arg_20 = 0
int64_t result = &r14[r12[1]]
uint64_t rcx_2 = sx.q(r12[1].d) << 3 u>> 3

if (r14 u> result)
    rcx_2 = 0

if (rcx_2 != 0)
    do
        int64_t* rsi_1 = *r14
        void* lpCriticalSection = &rsi_1[6]
        EnterCriticalSection(lpCriticalSection)
        int32_t i = 0
        result = *(*(*rsi_1 + 0x20) + 0x4e8)
        
        if (rsi_1[0x14].d s> 0)
            int64_t r12_1 = 0
            int64_t result_1 = result
            
            do
                int64_t* r14_2 = rsi_1[0x13] + r12_1
                int64_t r15_1 = r14_2[1]
                
                if (r15_1 u> *(result_1 + 0x48))
                    result = sub_141037da0(result_1)
                    
                    if (r15_1 u> result)
                        break
                
                sub_14101c0a0(rsi_1, r14_2[2].d, *(r14_2 + 0x14))
                int32_t rdx_3 = *(rsi_1 + 0x74) << (*(r14_2 + 0x14)).b
                rsi_1[0xb].d -= rdx_3
                result = zx.q(r14_2[3].d)
                *(rsi_1 + 0x5c) -= result.d
                *(rsi_1 + 0xbc) -= rdx_3
                
                if (*(rsi_1 + 0x7c) == 0)
                    int64_t* rcx_8 = *r14_2
                    result = zx.q(rcx_8[1].d)
                    rcx_8[1].d -= 1
                    
                    if (result.d == 1 && rcx_8 != 0)
                        result = (**rcx_8)(rcx_8, 1)
                    
                    *r14_2 = 0
                
                rsi_1[0xc].d -= 1
                i = i_1 + 1
                r12_1 += 0x20
                i_1 = i
            while (i s< rsi_1[0x14].d)
            
            lpCriticalSection = &rsi_1[6]
            
            if (i != 0)
                int32_t rax_3 = rsi_1[0x14].d
                
                if (rax_3 != i)
                    int64_t rcx_9 = rsi_1[0x13]
                    memmove(rcx_9, (sx.q(i) << 5) + rcx_9, (rax_3 - i) << 5)
                    rax_3 = rsi_1[0x14].d
                
                result = zx.q(rax_3 - i)
                rsi_1[0x14].d = result.d
            
            r15 = arg_20
            r14 = arg_18
        
        if (lpCriticalSection != 0)
            result = LeaveCriticalSection(lpCriticalSection)
        
        r14 = &r14[1]
        r15 += 1
        arg_18 = r14
        i_1 = 0
        arg_20 = r15
    while (r15 != rcx_2)
    
    rbx = arg1

int32_t rsi_2 = *(rbx + 0x90)
int32_t rsi_3 = rsi_2 - 1

if (rsi_2 - 1 s>= 0)
    int64_t r14_3 = sx.q(rsi_3) << 3
    int64_t r15_2 = r14_3
    int64_t rbp_2 = sx.q(rsi_3 + 1) << 3
    int32_t temp2_1
    
    do
        void* rcx_11 = *(r14_3 + *r12)
        void* rdx_11 = sx.q(*(rcx_11 + 0xb8)) * 0x50 + *(rcx_11 + 0xa8)
        result = zx.q(*(rdx_11 + 8) - *(rdx_11 + 0x34))
        
        if (result.d == 1)
            sub_14101c400(rcx_11)
            void* rbx_1 = *(r14_3 + *r12)
            
            if (rbx_1 != 0)
                sub_14100df10(rbx_1 + 0xa8)
                int64_t rcx_13 = *(rbx_1 + 0x98)
                
                if (rcx_13 != 0)
                    sub_140a74f90(rcx_13)
                
                int64_t* rcx_14 = *(rbx_1 + 0x90)
                
                if (rcx_14 != 0)
                    rcx_14[1].d -= 1
                    
                    if (rcx_14[1].d == 1 && rcx_14 != 0)
                        (**rcx_14)(rcx_14, 1)
                
                int64_t* rcx_15 = *(rbx_1 + 0x88)
                
                if (rcx_15 != 0)
                    rcx_15[1].d -= 1
                    
                    if (rcx_15[1].d == 1 && rcx_15 != 0)
                        (**rcx_15)(rcx_15, 1)
                
                DeleteCriticalSection(rbx_1 + 0x30)
                int64_t rcx_17 = *(rbx_1 + 0x18)
                
                if (rcx_17 != 0)
                    sub_140a74f90(rcx_17)
                
                j_sub_140a74f90(rbx_1)
            
            int32_t rax_15 = r12[1].d
            int32_t rcx_20 = rax_15 - rsi_3
            
            if (rcx_20 != 1)
                int64_t rax_14 = *r12
                memmove(rax_14 + r15_2, rax_14 + rbp_2, (rcx_20 - 1) << 3)
                rax_15 = r12[1].d
            
            r12[1].d = rax_15 - 1
            result = sub_1405c53d0(r12)
        
        rbp_2 -= 8
        r15_2 -= 8
        r14_3 -= 8
        temp2_1 = rsi_3
        rsi_3 -= 1
    while (temp2_1 - 1 s>= 0)

if (lpCriticalSection_1 == 0)
    return result

return LeaveCriticalSection(lpCriticalSection_1) __tailcall
