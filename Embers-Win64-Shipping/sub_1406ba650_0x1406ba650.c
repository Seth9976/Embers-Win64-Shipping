// 函数: sub_1406ba650
// 地址: 0x1406ba650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = -0xb

while (true)
    int32_t arg_8
    
    if (*(*(arg1 + 8) + 0x24) == arg1[6])
        do
            if (*(*(arg1 + 8) + 0x20) != 0)
            label_1406ba7de:
                return 0xffffffff
            
            void* rcx_1 = *(arg1 + 0x10)
            int32_t rdx = *(rcx_1 + 0xc)
            
            if (rdx == 0)
                int32_t i_2 = avcodec_receive_frame(rcx_1, arg2)
                i = i_2
                
                if (i_2 s>= 0)
                    int32_t rax_24 = *arg1
                    
                    if (rax_24 == 0xffffffff)
                        *(arg2 + 0x88) = *(arg2 + 0x198)
                        return 1
                    
                    if (rax_24 == 0)
                        *(arg2 + 0x88) = *(arg2 + 0x98)
                    
                    return 1
            else if (rdx == 1)
                int32_t i_1 = avcodec_receive_frame(rcx_1, arg2)
                i = i_1
                
                if (i_1 s>= 0)
                    int64_t rcx_2 = *(arg2 + 0x88)
                    int32_t rax_3 = *(arg2 + 0x110)
                    arg_8 = 1
                    int32_t arg_c = rax_3
                    int64_t rbx_1 = arg_8.q
                    
                    if (rcx_2 == -0x8000000000000000)
                        rcx_2 = *(arg1 + 0x40)
                        
                        if (rcx_2 != -0x8000000000000000)
                            *(arg2 + 0x88) = av_rescale_q(rcx_2, *(arg1 + 0x48), rbx_1)
                    else
                        *(arg2 + 0x88) = av_rescale_q(rcx_2, *(*(arg1 + 0x10) + 0x374), rbx_1)
                    
                    int64_t rcx_21 = *(arg2 + 0x88)
                    
                    if (rcx_21 == -0x8000000000000000)
                        return 1
                    
                    int64_t rax_22 = sx.q(*(arg2 + 0x70)) + rcx_21
                    *(arg1 + 0x48) = rbx_1
                    *(arg1 + 0x40) = rax_22
                    return 1
            
            if (i == 0xdfb9b0bb)
                int64_t rcx_22 = *(arg1 + 0x10)
                arg1[7] = arg1[6]
                avcodec_flush_buffers(rcx_22)
                return 0
            
            if (i s>= 0)
                return 1
        while (i != 0xfffffff5)
    
    void* rcx_3 = *(arg1 + 8)
    
    while (true)
        if (*(rcx_3 + 0x10) == 0)
            int64_t* rcx_4 = **(arg1 + 0x28)
            
            if (rcx_4 != 0)
                (*(*rcx_4 + 0x10))(rcx_4)
        
        int128_t var_88
        
        if (arg1[8].b == 0)
            int64_t* rbx_2 = *(arg1 + 8)
            EnterCriticalSection(&rbx_2[5])
            
            if (rbx_2[4].b != 0)
            label_1406ba7d8:
                LeaveCriticalSection(&rbx_2[5])
                goto label_1406ba7de
            
            while (true)
                int128_t* rcx_7 = *rbx_2
                
                if (rcx_7 != 0)
                    int64_t rax_9 = *(rcx_7 + 0x58)
                    *rbx_2 = rax_9
                    
                    if (rax_9 == 0)
                        rbx_2[1] = 0
                    
                    rbx_2[2].d -= 1
                    *(rbx_2 + 0x14) += 0xffffff98 - rcx_7[2].d
                    rbx_2[3] -= rcx_7[4].q
                    var_88 = *rcx_7
                    uint128_t var_78_1 = rcx_7[1]
                    int128_t var_68_1 = rcx_7[2]
                    uint128_t var_58_1 = rcx_7[3]
                    int128_t var_48_1 = rcx_7[4]
                    uint64_t var_38_1 = rcx_7[5].q
                    
                    if (arg1 != -0x18)
                        arg1[6] = rcx_7[6].d
                    
                    j_sub_140a74f90(rcx_7)
                    LeaveCriticalSection(&rbx_2[5])
                    break
                
                LeaveCriticalSection(&rbx_2[5])
                int64_t* rcx_9 = rbx_2[0xa]
                (*(*rcx_9 + 0x20))(rcx_9, 0xffffffff, 0)
                EnterCriticalSection(&rbx_2[5])
                
                if (rbx_2[4].b != 0)
                    goto label_1406ba7d8
        else
            av_packet_move_ref(&var_88, &var_88)
            arg1[8].b = 0
        
        rcx_3 = *(arg1 + 8)
        
        if (*(rcx_3 + 0x24) == arg1[6])
            void* rdx_7 = data_143cde100
            void* rcx_13 = *(arg1 + 0x10)
            int64_t var_70
            
            if (rdx_7 != 0 && *(rdx_7 + 0x18) == var_70)
                avcodec_flush_buffers(rcx_13, rdx_7)
                *(arg1 + 0x40) = *(arg1 + 0x30)
                *(arg1 + 0x48) = *(arg1 + 0x38)
                arg1[7] = 0
                break
            
            if (*(rcx_13 + 0xc) != 3)
                int32_t rax_19 = avcodec_send_packet(rcx_13, &var_88)
                
                if (rax_19 == 0xfffffff5)
                    av_log(*(arg1 + 0x10), zx.q(rax_19 + 0x1b), 
                        "Receive_frame and send_packet both returned EAGAIN, which is an API violation.\n")
                    arg1[8].b = 1
                    av_packet_move_ref(&var_88, &var_88)
                
                av_packet_unref(&var_88)
                break
            
            arg_8 = 0
            
            if (avcodec_decode_subtitle2(rcx_13, arg3, &arg_8, &var_88) s< 0)
                i = -0xb
                av_packet_unref(&var_88)
                break
            
            int32_t rax_18 = arg_8
            
            if (rax_18 != 0)
                if (var_70 == 0)
                    arg1[8].b = 1
                    av_packet_move_ref(&var_88, &var_88)
                    rax_18 = arg_8
                
                if (rax_18 != 0)
                    i = 0
                    av_packet_unref(&var_88)
                    break
            
            i = -0x20464f45
            
            if (var_70 != 0)
                i = -0xb
            
            av_packet_unref(&var_88)
            break
