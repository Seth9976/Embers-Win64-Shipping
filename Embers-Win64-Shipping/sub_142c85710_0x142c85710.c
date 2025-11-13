// 函数: sub_142c85710
// 地址: 0x142c85710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char (* arg_10)[0x10] = arg2
char (* r14)[0x10] = arg2
void* r12 = **(arg1 + 0x10)
*(arg1 + 0x15c) = 0x200
int64_t rcx = sx.q(arg3)
int64_t arg_20 = rcx
void* rax_1 = &(*arg2)[rcx]

if (arg2 u< rax_1)
    while (true)
        void* rdi_3 = rcx - r14 + arg2
        uint64_t rax_2
        int64_t r8_1
        rax_2, r8_1 = memchr(r14, 0, rdi_3)
        void* rbx_2
        
        if (rax_2 == 0)
            rbx_2 = rdi_3
        else
            rbx_2 = rax_2 - r14
        
        if (rbx_2 + 1 u>= rdi_3)
            sub_142c64760(r12, "Malformed ACK packet, rejecting", r8_1, arg4)
            return 0x47
        
        void* r15_1 = rbx_2 + 1 + r14
        void* rbp_2 = rdi_3 - (rbx_2 + 1)
        char (* rsi_1)[0x10] = r14
        uint64_t rax_3
        rax_3, r8_1 = memchr(r15_1, 0, rbp_2)
        void* rax_4
        
        if (rax_3 == 0)
            rax_4 = rbp_2
        else
            rax_4 = rax_3 - r15_1
        
        int64_t rcx_4 = rax_4 + 1 + rbx_2 + 1
        
        if (rcx_4 u> rdi_3)
            sub_142c64760(r12, "Malformed ACK packet, rejecting", r8_1, arg4)
            return 0x47
        
        int64_t rax_5 = -1
        
        do
            rax_5 += 1
        while ((*r14)[rax_5] != 0)
        
        void* _String = &(*r14)[1 + rax_5]
        char (* temp0_1)[0x10] = r14
        r14 = &(*r14)[rcx_4]
        
        if (temp0_1 == neg.q(rcx_4))
            sub_142c64760(r12, "Malformed ACK packet, rejecting", r8_1, arg4)
            return 0x47
        
        arg4 = sub_142c64850(r12, "got option=(%s) value=(%s)\n", rsi_1, arg4)
        int64_t r8_4 = -1
        
        do
            r8_4 += 1
        while ((*rsi_1)[r8_4] != 0)
        
        if (j_sub_142c704d0(rsi_1, "blksize", r8_4) == 0)
            int64_t r8_6 = -1
            
            do
                r8_6 += 1
            while ((*rsi_1)[r8_6] != 0)
            
            if (j_sub_142c704d0(rsi_1, "tsize", r8_6) != 0)
                int64_t rbx_4 = sx.q(strtol(_String, nullptr, 0xa))
                arg4 = sub_142c64850(r12, "%s (%ld)\n", "tsize parsed from OACK", arg4)
                
                if (*(r12 + 0x5e9) == 0)
                    if (rbx_4.d == 0)
                        sub_142c64760(r12, "invalid tsize -:%s:- value in OACK packet", _String, 
                            arg4)
                        return 0x47
                    
                    sub_142c6f180(r12, rbx_4)
        else
            int32_t rax_7
            int64_t r8_5
            rax_7, r8_5 = strtol(_String, nullptr, 0xa)
            
            if (rax_7 == 0)
                sub_142c64760(r12, "invalid blocksize value in OACK packet", r8_5, arg4)
                return 0x47
            
            if (rax_7 s> 0xffb8)
                sub_142c64760(r12, "%s (%d)", "blksize is larger than max supported", arg4)
                return 0x47
            
            if (rax_7 s< 8)
                sub_142c64760(r12, "%s (%d)", "blksize is smaller than min supported", arg4)
                return 0x47
            
            int32_t rcx_8 = *(arg1 + 0x160)
            
            if (rax_7 s> rcx_8)
                sub_142c64760(r12, "%s (%ld)", "server requested blksize larger than allocated", 
                    arg4)
                return 0x47
            
            int32_t var_40_1 = rcx_8
            *(arg1 + 0x15c) = rax_7
            char const* const var_48_1 = "requested"
            arg4 = sub_142c64850(r12, "%s (%d) %s (%d)\n", "blksize parsed from OACK", arg4)
        
        if (r14 u>= rax_1)
            break
        
        arg2 = arg_10
        rcx = arg_20

return 0
