// 函数: sub_140866cd0
// 地址: 0x140866cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = data_143ce46a0
int32_t rdi = 0
void arg_8

if (rbx != 0)
    int32_t rdx_1 = data_143a30688
    int32_t r14_1 = 0
    
    if (rdx_1 s> 0)
        int64_t r15_1 = 0
        
        do
            int64_t* rsi_2 = data_143a30680 + r15_1
            
            if (rsi_2[1].d != 0)
                int64_t* rcx_1 = *rsi_2
                
                if (rcx_1 != 0)
                    if (*(*(*rcx_1 + 0x30))(rcx_1, &arg_8) == rbx)
                        if (rsi_2[1].d != 0)
                            int64_t* rcx_2 = *rsi_2
                            
                            if (rcx_2 != 0)
                                (*(*rcx_2 + 0x38))(rcx_2, 0)
                                int64_t rcx_3 = *rsi_2
                                
                                if (rcx_3 != 0)
                                    *rsi_2 = sub_140a84c80(rcx_3, 0, 0)
                                
                                rsi_2[1].d = 0
                        
                        if (data_143a30694 s<= 0)
                            int32_t rdx_3 = data_143a30688
                            int32_t rbx_1 = 0
                            int32_t r14_2 = rdx_3
                            
                            if (rdx_3 s> 0)
                                int64_t* rsi_3 = nullptr
                                
                                do
                                    int64_t rax_5 = data_143a30680
                                    
                                    if (*(rsi_3 + rax_5 + 8) == 0)
                                        sub_1405a4880(&data_143a30680, rbx_1, 1, 1)
                                    else
                                        int64_t* rcx_4 = *(rsi_3 + rax_5)
                                        
                                        if (rcx_4 == 0)
                                            sub_1405a4880(&data_143a30680, rbx_1, 1, 1)
                                        else if ((*(*rcx_4 + 0x20))(rcx_4) != 0)
                                            sub_1405a4880(&data_143a30680, rbx_1, 1, 1)
                                        else
                                            rbx_1 += 1
                                            rsi_3 = &rsi_3[2]
                                    
                                    rdx_3 = data_143a30688
                                while (rbx_1 s< rdx_3)
                            
                            int32_t rax_8 = rdx_3 * 2
                            
                            if (rax_8 s<= 2)
                                rax_8 = 2
                            
                            data_143a30690 = rax_8
                            
                            if (r14_2 s> rax_8 && data_143a3068c != rdx_3)
                                sub_1405a5410(&data_143a30680, rdx_3)
                        
                        break
                    
                    rdx_1 = data_143a30688
            
            r14_1 += 1
            r15_1 += 0x10
        while (r14_1 s< rdx_1)

int64_t rbx_2 = data_143ce46a8

if (rbx_2 != 0)
    int32_t rdx_5 = data_143a306d0
    int32_t r14_3 = 0
    
    if (rdx_5 s> 0)
        int64_t r15_2 = 0
        
        do
            int64_t* rsi_5 = data_143a306c8 + r15_2
            
            if (rsi_5[1].d != 0)
                int64_t* rcx_5 = *rsi_5
                
                if (rcx_5 != 0)
                    if (*(*(*rcx_5 + 0x30))(rcx_5, &arg_8) == rbx_2)
                        if (rsi_5[1].d != 0)
                            int64_t* rcx_6 = *rsi_5
                            
                            if (rcx_6 != 0)
                                (*(*rcx_6 + 0x38))(rcx_6, 0)
                                int64_t rcx_7 = *rsi_5
                                
                                if (rcx_7 != 0)
                                    *rsi_5 = sub_140a84c80(rcx_7, 0, 0)
                                
                                rsi_5[1].d = 0
                        
                        if (data_143a306dc s<= 0)
                            int32_t rdx_7 = data_143a306d0
                            int32_t rbx_3 = 0
                            int32_t r14_4 = rdx_7
                            
                            if (rdx_7 s> 0)
                                int64_t* rsi_6 = nullptr
                                
                                do
                                    int64_t rax_13 = data_143a306c8
                                    
                                    if (*(rsi_6 + rax_13 + 8) == 0)
                                        sub_1405a4880(&data_143a306c8, rbx_3, 1, 1)
                                    else
                                        int64_t* rcx_8 = *(rsi_6 + rax_13)
                                        
                                        if (rcx_8 == 0)
                                            sub_1405a4880(&data_143a306c8, rbx_3, 1, 1)
                                        else if ((*(*rcx_8 + 0x20))(rcx_8) != 0)
                                            sub_1405a4880(&data_143a306c8, rbx_3, 1, 1)
                                        else
                                            rbx_3 += 1
                                            rsi_6 = &rsi_6[2]
                                    
                                    rdx_7 = data_143a306d0
                                while (rbx_3 s< rdx_7)
                            
                            int32_t rax_16 = rdx_7 * 2
                            
                            if (rax_16 s<= 2)
                                rax_16 = 2
                            
                            data_143a306d8 = rax_16
                            
                            if (r14_4 s> rax_16 && data_143a306d4 != rdx_7)
                                sub_1405a5410(&data_143a306c8, rdx_7)
                        
                        break
                    
                    rdx_5 = data_143a306d0
            
            r14_3 += 1
            r15_2 += 0x10
        while (r14_3 s< rdx_5)

sub_1405c2d80(&data_143a306f8, data_143ce46b0)
sub_1405c2d80(&data_143a30788, data_143ce46b8)
int64_t rbx_4 = data_143ce46c0

if (rbx_4 != 0)
    int32_t rdx_11 = data_143a30658
    int32_t r14_5 = 0
    
    if (rdx_11 s> 0)
        int64_t r15_3 = 0
        
        do
            int64_t* rsi_8 = data_143a30650 + r15_3
            
            if (rsi_8[1].d != 0)
                int64_t* rcx_9 = *rsi_8
                
                if (rcx_9 != 0)
                    if (*(*(*rcx_9 + 0x30))(rcx_9, &arg_8) == rbx_4)
                        if (rsi_8[1].d != 0)
                            int64_t* rcx_10 = *rsi_8
                            
                            if (rcx_10 != 0)
                                (*(*rcx_10 + 0x38))(rcx_10, 0)
                                int64_t rcx_11 = *rsi_8
                                
                                if (rcx_11 != 0)
                                    *rsi_8 = sub_140a84c80(rcx_11, 0, 0)
                                
                                rsi_8[1].d = 0
                        
                        if (data_143a30664 s<= 0)
                            int32_t rdx_13 = data_143a30658
                            int32_t rbx_5 = 0
                            int32_t r14_6 = rdx_13
                            
                            if (rdx_13 s> 0)
                                int64_t* rsi_9 = nullptr
                                
                                do
                                    int64_t rax_21 = data_143a30650
                                    
                                    if (*(rsi_9 + rax_21 + 8) == 0)
                                        sub_1405a4880(&data_143a30650, rbx_5, 1, 1)
                                    else
                                        int64_t* rcx_12 = *(rsi_9 + rax_21)
                                        
                                        if (rcx_12 == 0)
                                            sub_1405a4880(&data_143a30650, rbx_5, 1, 1)
                                        else if ((*(*rcx_12 + 0x20))(rcx_12) != 0)
                                            sub_1405a4880(&data_143a30650, rbx_5, 1, 1)
                                        else
                                            rbx_5 += 1
                                            rsi_9 = &rsi_9[2]
                                    
                                    rdx_13 = data_143a30658
                                while (rbx_5 s< rdx_13)
                            
                            int32_t rax_24 = rdx_13 * 2
                            
                            if (rax_24 s<= 2)
                                rax_24 = 2
                            
                            data_143a30660 = rax_24
                            
                            if (r14_6 s> rax_24 && data_143a3065c != rdx_13)
                                sub_1405a5410(&data_143a30650, rdx_13)
                        
                        break
                    
                    rdx_11 = data_143a30658
            
            r14_5 += 1
            r15_3 += 0x10
        while (r14_5 s< rdx_11)

sub_140d21fd0()
sub_1405c2d80(&data_1439aad30, data_143ce46c8)
sub_1405c2d80(&data_1439aa9b8, data_143ce46d0)
sub_140d21f60()
sub_1405c2d80(&data_1439aad48, data_143ce46d8)
sub_1405c2d80(&data_1439aa9d0, data_143ce46e0)
int32_t r11 = (data_14396ff98).d
int32_t rcx_13 = 0
int32_t var_98 = 0
int32_t var_94 = 1
void* var_90 = &data_14396ff80
int32_t var_88 = 0xffffffff
int32_t var_84 = 0
int32_t var_80 = 0

if (r11 != 0)
    void* rax_25 = data_14396ff90
    void* r8_1 = &data_14396ff80
    
    if (rax_25 != 0)
        r8_1 = rax_25
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_21 = *r8_1
    int32_t var_84_2
    
    if (rdx_21 != 0)
    label_140867183:
        int32_t rax_32 = neg.d(rdx_21) & rdx_21
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_32)
        int32_t var_94_1 = rax_32
        int32_t rax_33
        
        if (rax_32 == 0)
            rax_33 = 0x20
        else
            rax_33 = 0x1f - temp0_2
        
        int32_t var_84_1 = rcx_13 - rax_33 + 0x1f
        
        if (rcx_13 - rax_33 + 0x1f s> r11)
            var_84_2 = r11
    else
        while (true)
            int64_t rdx_22 = sx.q(rdi)
            rcx_13 += 0x20
            rdi += 1
            int32_t var_80_1 = rcx_13
            var_98 = rdi
            
            if (rdx_22.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_21 = *(r8_1 + (rdx_22 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_21 != 0)
                goto label_140867183
        
        var_84_2 = r11

int128_t var_38 = 0xffffffff
uint128_t result = (&data_14396ff70).o
int32_t var_84_3 = r11
int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
uint128_t result_1 = result
int96_t var_68 = var_98.o:8.12
int64_t var_58 = temp0_3

while (true)
    int32_t var_5c
    int64_t rax_35 = sx.q(var_5c)
    int64_t* rdx_24 = result_1.q
    
    if (rax_35.d == ((0xffffffff << (r11.b & 0x1f)).q u>> 0x20).d && var_68.q == &data_14396ff80
            && rdx_24 == &data_14396ff70)
        return result
    
    result = _mm_bsrli_si128(*(*rdx_24 + rax_35 * 0x18), 8)
    int64_t* rcx_18 = result.q
    
    if (rcx_18 != 0)
        (**rcx_18)(rcx_18, 1)
    
    var_68:8.d &= not.d(result_1:0xc.d)
    sub_14059bdd0(&result_1:8)
