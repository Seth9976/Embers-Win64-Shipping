// 函数: sub_1422a3630
// 地址: 0x1422a3630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rbx = arg2
int32_t arg_18
char result = sub_140b2ab80(rbx, u"ColorVertexData(", &arg_18)

if (result == 0)
    return result

int16_t i_3 = *rbx

if (i_3 != 0)
    int16_t i_2 = i_3
    int16_t i
    
    do
        i = i_2
        
        if (i_2 == 0x29)
            break
        
        i = rbx[1]
        rbx = &rbx[1]
        i_2 = i
    while (i != 0)
    
    if (i != 0)
        while (i != 0x28)
            i = rbx[1]
            rbx = &rbx[1]
            
            if (i == 0)
                break

char rdx = arg1[7].b
void* rbx_1 = &rbx[1]
*(arg1 + 0x34) = arg_18
sub_14228fd40(arg1, rdx)
int64_t* rcx_2 = arg1[3]
(*(*rcx_2 + 8))(rcx_2, zx.q(*(arg1 + 0x34)), 0)
int64_t* rcx_3 = arg1[3]
int32_t i_1 = 0
char* r8_1 = (*(*rcx_3 + 0x30))(rcx_3)

if (*(arg1 + 0x34) u> 0)
    do
        int16_t rdx_2 = *(rbx_1 + 0xc)
        
        if (rdx_2 - 0x30 u> 9)
            if (rdx_2 - 0x61 u<= 5)
                rdx_2.b -= 0x57
            else if (rdx_2 - 0x41 u> 5)
                rdx_2.b = 0
            else
                rdx_2.b -= 0x37
        
        int16_t rcx_5 = *(rbx_1 + 0xe)
        
        if (rcx_5 - 0x30 u<= 9)
            rcx_5.b -= 0x30
        else if (rcx_5 - 0x61 u<= 5)
            rcx_5.b -= 0x57
        else if (rcx_5 - 0x41 u> 5)
            rcx_5.b = 0
        else
            rcx_5.b -= 0x37
        
        rdx_2.b <<= 4
        rdx_2.b += rcx_5.b
        *r8_1 = rdx_2.b
        int16_t rcx_6 = *(rbx_1 + 8)
        
        if (rcx_6 - 0x30 u> 9)
            if (rcx_6 - 0x61 u<= 5)
                rcx_6.b -= 0x57
            else if (rcx_6 - 0x41 u> 5)
                rcx_6.b = 0
            else
                rcx_6.b -= 0x37
        
        int16_t rdx_3 = *(rbx_1 + 0xa)
        
        if (rdx_3 - 0x30 u<= 9)
            rdx_3.b -= 0x30
        else if (rdx_3 - 0x61 u<= 5)
            rdx_3.b -= 0x57
        else if (rdx_3 - 0x41 u> 5)
            rdx_3.b = 0
        else
            rdx_3.b -= 0x37
        
        rcx_6.b <<= 4
        rcx_6.b += rdx_3.b
        r8_1[1] = rcx_6.b
        int16_t rcx_7 = *(rbx_1 + 4)
        
        if (rcx_7 - 0x30 u> 9)
            if (rcx_7 - 0x61 u<= 5)
                rcx_7.b -= 0x57
            else if (rcx_7 - 0x41 u> 5)
                rcx_7.b = 0
            else
                rcx_7.b -= 0x37
        
        int16_t rdx_4 = *(rbx_1 + 6)
        
        if (rdx_4 - 0x30 u<= 9)
            rdx_4.b -= 0x30
        else if (rdx_4 - 0x61 u<= 5)
            rdx_4.b -= 0x57
        else if (rdx_4 - 0x41 u> 5)
            rdx_4.b = 0
        else
            rdx_4.b -= 0x37
        
        rcx_7.b <<= 4
        rcx_7.b += rdx_4.b
        r8_1[2] = rcx_7.b
        int16_t rcx_8 = *rbx_1
        
        if (rcx_8 - 0x30 u> 9)
            if (rcx_8 - 0x61 u<= 5)
                rcx_8.b -= 0x57
            else if (rcx_8 - 0x41 u> 5)
                rcx_8.b = 0
            else
                rcx_8.b -= 0x37
        
        int16_t rdx_5 = *(rbx_1 + 2)
        
        if (rdx_5 - 0x30 u<= 9)
            rdx_5.b -= 0x30
        else if (rdx_5 - 0x61 u<= 5)
            rdx_5.b -= 0x57
        else if (rdx_5 - 0x41 u> 5)
            rdx_5.b = 0
        else
            rdx_5.b -= 0x37
        
        rcx_8.b <<= 4
        rbx_1 += 0x12
        rcx_8.b += rdx_5.b
        i_1 += 1
        r8_1[3] = rcx_8.b
        r8_1 = &r8_1[4]
    while (i_1 u< *(arg1 + 0x34))

int64_t* rcx_9 = arg1[3]
arg1[5] = (*(*rcx_9 + 0x30))(rcx_9)
return sub_141997e80(arg1)
