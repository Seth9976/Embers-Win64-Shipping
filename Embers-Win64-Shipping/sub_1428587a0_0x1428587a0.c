// 函数: sub_1428587a0
// 地址: 0x1428587a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int128_t* result = sub_1428a6730(0x1e0)

if (result != 0)
    int128_t* result_1 = result
    int128_t* r8_1 = arg1
    int64_t i_1 = 3
    int64_t i
    
    do
        result_1 = &result_1[8]
        int128_t zmm0_1 = *r8_1
        r8_1 = &r8_1[8]
        result_1[-8] = zmm0_1
        result_1[-7] = r8_1[-7]
        result_1[-6] = r8_1[-6]
        result_1[-5] = r8_1[-5]
        result_1[-4] = r8_1[-4]
        result_1[-3] = r8_1[-3]
        result_1[-2] = r8_1[-2]
        result_1[-1] = r8_1[-1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    *result_1 = *r8_1
    result_1[1] = r8_1[1]
    result_1[2] = r8_1[2]
    result_1[3] = r8_1[3]
    result_1[4] = r8_1[4]
    result_1[5] = r8_1[5]
    result[0xe].q = 0
    *(result + 0xe8) = 0
    *(result + 0x138) = 0
    *(result + 0x158) = 0
    *(result + 0x168) = 0
    *(result + 0x178) = 0
    result[0x18].q = 0
    result[0x1a].q = 0
    *(result + 0x1b8) = 0
    *(result + 0x108) = 0
    *(result + 0xf8) = 0
    result[0x1c].q = 0
    result[0x14].q = i_1
    *(result + 0x148) = 0
    result[0x15].q = 0
    *(result + 0x114) = 1
    CRITICAL_SECTION* rax = sub_1428a5be0()
    *(result + 0x1d8) = rax
    
    if (rax != 0 && sub_1428a62f0(2, result, &result[0x14]) != 0)
        void* rcx = *(arg1 + 0xf8)
        
        if (rcx == 0)
            goto label_14285895e
        
        if (sub_1428a3ba0(rcx) != 0)
            *(result + 0xf8) = *(arg1 + 0xf8)
        label_14285895e:
            int128_t* rcx_1 = *(arg1 + 0x108)
            int128_t* rax_4
            
            if (rcx_1 != 0)
                rax_4 = sub_1428a3640(rcx_1)
                *(result + 0x108) = rax_4
            
            if (rcx_1 == 0 || rax_4 != 0)
                char* rcx_2 = arg1[0xe].q
                int64_t rax_5
                
                if (rcx_2 != 0)
                    rax_5 = sub_1428a6ba0(rcx_2)
                    result[0xe].q = rax_5
                
                if (rcx_2 == 0 || rax_5 != 0)
                    char* rcx_3 = *(arg1 + 0xe8)
                    int64_t rax_6
                    
                    if (rcx_3 != 0)
                        rax_6 = sub_1428a6ba0(rcx_3)
                        *(result + 0xe8) = rax_6
                    
                    if (rcx_3 == 0 || rax_6 != 0)
                        int128_t* rcx_4 = *(arg1 + 0x138)
                        int128_t* rax_7
                        
                        if (rcx_4 != 0)
                            rax_7 = sub_142898900(rcx_4)
                            *(result + 0x138) = rax_7
                        
                        if ((rcx_4 == 0 || rax_7 != 0)
                                && sub_1428a5d40(2, &result[0x14], &arg1[0x14]) != 0)
                            char* rcx_5 = *(arg1 + 0x158)
                            int64_t rax_9
                            
                            if (rcx_5 != 0)
                                rax_9 = sub_1428a6ba0(rcx_5)
                                *(result + 0x158) = rax_9
                            
                            if (rcx_5 == 0 || rax_9 != 0)
                                int64_t rcx_6 = *(arg1 + 0x168)
                                int64_t rax_10
                                
                                if (rcx_6 != 0)
                                    rax_10 =
                                        sub_1428a6af0(rcx_6, arg1[0x16].q, "ssl\ssl_sess.c", 0xc8)
                                    *(result + 0x168) = rax_10
                                
                                if (rcx_6 == 0 || rax_10 != 0)
                                    int64_t rcx_7 = *(arg1 + 0x178)
                                    int64_t rax_11
                                    
                                    if (rcx_7 != 0)
                                        rax_11 = sub_1428a6af0(rcx_7, arg1[0x17].q * 2, 
                                            "ssl\ssl_sess.c", 0xd0)
                                        *(result + 0x178) = rax_11
                                    
                                    if (rcx_7 == 0 || rax_11 != 0)
                                        int64_t rcx_8
                                        
                                        if (arg2 != 0)
                                            rcx_8 = arg1[0x18].q
                                        
                                        if (arg2 == 0 || rcx_8 == 0)
                                            result[0x19].d = 0
                                            *(result + 0x188) = 0
                                        label_142858b39:
                                            int64_t rcx_10 = arg1[0x1a].q
                                            int64_t rax_14
                                            
                                            if (rcx_10 != 0)
                                                rax_14 = sub_1428a6af0(rcx_10, *(arg1 + 0x1a8), 
                                                    "ssl\ssl_sess.c", 0xe2)
                                                result[0x1a].q = rax_14
                                            
                                            if (rcx_10 == 0 || rax_14 != 0)
                                                char* rcx_11 = *(arg1 + 0x1b8)
                                                int64_t rax_15
                                                
                                                if (rcx_11 != 0)
                                                    rax_15 = sub_1428a6ba0(rcx_11)
                                                    *(result + 0x1b8) = rax_15
                                                
                                                if (rcx_11 == 0 || rax_15 != 0)
                                                    int64_t rcx_12 = arg1[0x1c].q
                                                    int64_t rax_16
                                                    
                                                    if (rcx_12 != 0)
                                                        rax_16 = sub_1428a6af0(rcx_12, 
                                                            *(arg1 + 0x1c8), "ssl\ssl_sess.c", 0xf2)
                                                        result[0x1c].q = rax_16
                                                    
                                                    if (rcx_12 == 0 || rax_16 != 0)
                                                        return result
                                        else
                                            int64_t rax_12 = sub_1428a6af0(rcx_8, *(arg1 + 0x188), 
                                                "ssl\ssl_sess.c", 0xd8)
                                            result[0x18].q = rax_12
                                            
                                            if (rax_12 != 0)
                                                goto label_142858b39

sub_1428a5670(0x14, 0x15c, 0x41, "ssl\ssl_sess.c", 0xf9)
sub_1428574d0(result)
return nullptr
