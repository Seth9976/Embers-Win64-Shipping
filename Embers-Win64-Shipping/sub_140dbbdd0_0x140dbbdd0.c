// 函数: sub_140dbbdd0
// 地址: 0x140dbbdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0xd4)
void* rsi = *(arg1 + 0xc8)
int32_t i_4 = *(arg1 + 0xd0)

if (rax s< 0)
    if (i_4 != 0)
        void* rsi_2 = rsi + 8
        int32_t i
        
        do
            int64_t* rbx_2 = *rsi_2
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp4_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            rsi_2 += 0x10
            i = i_4
            i_4 -= 1
        while (i != 1)
        rax = *(arg1 + 0xd4)
    
    *(arg1 + 0xd0) = 0
    
    if (rax != 0)
        sub_1405a5410(arg1 + 0xc8, 0)
else
    if (i_4 != 0)
        int64_t* rsi_1 = rsi + 8
        int32_t i_1
        
        do
            int64_t* rbx_1 = *rsi_1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp5_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            rsi_1 = &rsi_1[2]
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0xd0) = 0

sub_140e21910(arg1 + 0x48)
int32_t rax_5 = *(arg1 + 0xc4)
void* rbx_3 = *(arg1 + 0xb8)
int32_t i_5 = *(arg1 + 0xc0)

if (rax_5 s< 0)
    if (i_5 != 0)
        int32_t i_2
        
        do
            if (*(rbx_3 + 0x34) != 0)
                *(rbx_3 + 0x34) = 0
            
            int64_t rcx_7 = *rbx_3
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            rbx_3 += 0x40
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
        rax_5 = *(arg1 + 0xc4)
    
    *(arg1 + 0xc0) = 0
    
    if (rax_5 != 0)
        sub_1405a52a0(arg1 + 0xb8, 0)
else
    if (i_5 != 0)
        int32_t i_3
        
        do
            if (*(rbx_3 + 0x34) != 0)
                *(rbx_3 + 0x34) = 0
            
            int64_t rcx_6 = *rbx_3
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            rbx_3 += 0x40
            i_3 = i_5
            i_5 -= 1
        while (i_3 != 1)
    
    *(arg1 + 0xc0) = 0

int32_t rax_6 = *(arg1 + 0xb4)
*(arg1 + 0xb0) = 0

if (rax_6 s< 0 && rax_6 != 0)
    sub_1405dadb0(arg1 + 0xa8, 0)

sub_140dbbc40(arg1 + 0xf0, 0)
void* result = sub_140b16b40(arg1 + 0x18, 0)
bool cond:0 = *(arg1 + 0x77c) == 0
*(arg1 + 0x778) = 0

if (not(cond:0))
    result = sub_14085a940(arg1 + 0x750, 0)

bool cond:1 = *(arg1 + 0x79c) == 0
*(arg1 + 0x798) = 0

if (not(cond:1))
    result = sub_140dbd170(arg1 + 0x780, 0)

*(arg1 + 0x40) = 0
return result
