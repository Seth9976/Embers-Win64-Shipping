// 函数: sub_140621e30
// 地址: 0x140621e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = arg4
uint64_t result = zx.q(arg2 - 0x3c3)

if ((result.d & 0xfffffffc) == 0 && arg2 != 0x3c5)
    int32_t i = 0
    int64_t* rbp_1 = *(arg3 + 0x40)
    
    if (*(arg3 + 0x3a) != 1)
        result = zx.q(arg5 - rbp_1[2].d)
        rbp_1[6] = float.d(result) * 0.001
    else
        rbp_1[6] = 0
        *(arg3 + 0x3a) = 0
    
    if (arg2 != 0x3c3)
        if ((arg3[0xe].b & 1) == 0 && arg2 != 0x3c6 && *(arg4 + 0xc) s> 0)
            char* r15_1 = nullptr
            
            do
                char* rdx_1 = rbp_1[4]
                char rcx_1 = r15_1[*arg4]
                char arg_10 = rcx_1
                
                if (rdx_1 == rbp_1[5])
                    sub_14058b5e0(&rbp_1[3], rdx_1, &arg_10)
                else
                    *rdx_1 = rcx_1
                    rbp_1[4] += 1
                
                i += 1
                r15_1 = &r15_1[1]
            while (i s< *(arg4 + 0xc))
        
        result = arg4[2]
        
        if (*(rbp_1[result + 7] + 0xc) u> 0)
            EnterCriticalSection(&rbp_1[0xb])
            uint32_t rax_3 = midiInAddBuffer(*rbp_1, rbp_1[arg4[2] + 7], 0x70)
            result = LeaveCriticalSection(&rbp_1[0xb])
            
            if (rax_3 != 0)
                result = sub_14058b120(std::cerr, 
                    "\nRtMidiIn::midiInputCallback: error sending sysex to Midi device!!\n\n")
            
            if ((arg3[0xe].b & 1) == 0)
            label_14062202f:
                rbp_1[2].d = arg5
                
                if (arg3[0x12].b == 0)
                    uint64_t rdx_5 = zx.q(arg3[1])
                    int32_t rax_4 = *arg3
                    int32_t r8_3 = arg3[2]
                    int32_t rcx_9
                    
                    if (rdx_5.d u< rax_4)
                        rcx_9 = r8_3 - rax_4 + rdx_5.d
                    else
                        rcx_9 = rdx_5.d - rax_4
                    
                    if (rcx_9 u>= r8_3 - 1)
                        sub_14058b120(std::cerr, "\nMidiInWinMM: message queue limit reached!!\n\n")
                    else
                        int64_t* rdi_3 = (rdx_5 << 5) + *(arg3 + 0x10)
                        
                        if (rdi_3 != &rbp_1[3])
                            sub_14058e790(rdi_3, rbp_1[3], rbp_1[4])
                        
                        rdi_3[3] = rbp_1[6]
                        arg3[1] = modu.dp.d(0:(arg3[1] + 1), arg3[2])
                else
                    (*(arg3 + 0x50))(rbp_1[6], &rbp_1[3], *(arg3 + 0x58))
                
                result = rbp_1[3]
                rbp_1[4] = result
    else if (arg4.b s< 0)
        int64_t i_2
        
        if (arg4.b u< 0xc0)
            i_2 = 3
        label_140621f3f:
            char* rsi_1 = &arg_20
            int64_t i_1
            
            do
                char* rdx = rbp_1[4]
                
                if (rdx == rbp_1[5])
                    sub_14058b5e0(&rbp_1[3], rdx, rsi_1)
                else
                    *rdx = *rsi_1
                    rbp_1[4] += 1
                
                rsi_1 = &rsi_1[1]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
            goto label_14062202f
        
        if (arg4.b u< 0xe0)
            i_2 = 2
            goto label_140621f3f
        
        if (arg4.b u< 0xf0)
            i_2 = 3
            goto label_140621f3f
        
        if (arg4.b != 0xf1)
            if (arg4.b == 0xf2)
                i_2 = 3
                goto label_140621f3f
            
            if (arg4.b == 0xf3)
                i_2 = 2
                goto label_140621f3f
            
            if (arg4.b != 0xf8 || (arg3[0xe].b & 2) == 0)
                i_2 = 1
                
                if (arg4.b != 0xfe || (arg3[0xe].b & 4) == 0)
                    goto label_140621f3f
        else if ((arg3[0xe].b & 2) == 0)
            i_2 = 2
            goto label_140621f3f

return result
